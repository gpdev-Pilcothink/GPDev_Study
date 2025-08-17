#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "house.h"

House::House() {
}

int House::run(character& cha) {
	function f;
	system("cls"); //맵크기 40*25
	int x = 42, y = 25;
	int escape = 0; //맵탈출
	int key = 0; //키값 입력받기 위함
	int state = 0; //캐릭터 상태 표시
	while (escape != 1) {
		if (state == 0) {
			//이 밑에는 캐릭터를 표기하기 위한 코드
			f.gotoxy(90, 3);
			cout << "                      ";
			f.gotoxy(90, 3);
			cout << "이름:" << cha.RETURN_name();
			f.gotoxy(90, 5);
			cout << "                      ";
			f.gotoxy(90, 5);
			cout << "돈:" << cha.RETURN_money();
			f.gotoxy(90, 6);
			cout << "                      ";
			f.gotoxy(90, 6);
			cout << "스트레스:" << cha.RETURN_stress();
			f.gotoxy(90, 7);
			cout << "                      ";
			f.gotoxy(90, 7);
			cout << "배고픔:" << cha.RETURN_hungry();
			f.gotoxy(90, 8);
			cout << "                      ";
			f.gotoxy(90, 8);
			cout << "피곤함:" << cha.RETURN_tired();
			//이 밑에는 맵과 캐릭터 움직임을 구현한 코드
			f.gotoxy(0, 0);
			f.Draw_mainmap(map);
			state = 1;
		}
		f.gotoxy(x, y);
		cout << "▲";;
		key = _getch();
		if (key == LEFT) {
			f.gotoxy(x, y);
			cout << "  ";
			x -= 2;
			if (map[y][x / 2] != 0)
				x += 2;
		}
		if (key == RIGHT) {
			f.gotoxy(x, y);
			cout << "  ";
			x += 2;
			if (map[y][x / 2] != 0)
				x -= 2;
		}
		if (key == UP) {
			f.gotoxy(x, y);
			cout << "  ";
			y--;
			if (map[y][x / 2] != 0)
				y++;
		}
		if (key == DOWN) {
			f.gotoxy(x, y);
			cout << "  ";
			y++;
			if (map[y][x / 2] != 0)
				y--;
		}
		//밑에는 게임 종료 하는 코드
		if ((x / 2) == 4 && y == 3 && (key == 'A' || key == 'a')) {
			return 1;
		}
		//밑에는 집에서 행하는 행위를 관리하는 코드
		if ((x / 2) == 33 && y == 3 && (key=='A' || key=='a')) {  //피곤함을 채우는 코드
			cha.DEFAULT_tired();
			f.gotoxy(90, 8);
			cout << "                      ";
			f.gotoxy(90, 8);
			cout << "피곤함:" << cha.RETURN_tired();
		}
		//집에서 나가는 코드
		if ((x / 2) == 21 && y == 26) {  //피곤함을 채우는 코드
			return 0;
		}

		//밑에는 좌표값을 알기 위한 장치.
		f.gotoxy(20, 28);
		cout << "                      ";
		f.gotoxy(20, 28);
		cout << x / 2 << "," << y;
	}
	return 1;
}

House::~House() {
}