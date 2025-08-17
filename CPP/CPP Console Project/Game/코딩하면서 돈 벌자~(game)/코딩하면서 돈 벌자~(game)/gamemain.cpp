#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "Company.h"
#include "store.h"
#include "house.h"


gamemain :: gamemain() {
}


void gamemain::run(character *cha) {
	function f;
	int x = 40, y = 20;
	int select = 0;
	int key = 0;
	int state = 0; //캐릭터 상태 표시
	while (select != 1) {
		if (state == 0) {
			system("cls");
			//이 밑에는 캐릭터를 표기하기 위한 코드
			f.gotoxy(90, 3);
			cout << "                                                          ";
			f.gotoxy(90, 3);
			cout << "이름:" << cha->RETURN_name();
			f.gotoxy(90, 5);
			cout << "                      ";
			f.gotoxy(90, 5);
			cout << "돈:" << cha->RETURN_money();
			f.gotoxy(90, 6);
			cout << "                      ";
			f.gotoxy(90, 6);
			cout << "스트레스:" << cha->RETURN_stress();
			f.gotoxy(90, 7);
			cout << "                      ";
			f.gotoxy(90, 7);
			cout << "배고픔:" << cha->RETURN_hungry();
			f.gotoxy(90, 8);
			cout << "                      ";
			f.gotoxy(90, 8);
			cout << "피곤함:" << cha->RETURN_tired();
			f.gotoxy(90, 9);
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
			x-=2;
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
			if (map[y][x/2] != 0)
				y++;
		}
		if (key == DOWN) {
			f.gotoxy(x, y);
			cout << "  ";
			y++;
			if (map[y][x/2] != 0)
				y--;
		}
		if ((x/2)==30 && y==9) {
			Company COMPANY;
			COMPANY.run(*cha);
			f.gotoxy(x, y);
			cout << "  ";
			x -= 2;
			state = 0;
		}
		else if ((x / 2) == 30 && y == 25) {
			Store STORE;
				STORE.run(*cha);
				f.gotoxy(x, y);
				cout << "  ";
				x -= 2;
				state = 0;
		}
		else if ((x / 2) == 6 && y == 8) {
			House HOUSE;
			select=HOUSE.run(*cha);
			f.gotoxy(x, y);
			cout << "  ";
			y++;
			state = 0;
		}

		//밑에는 좌표값을 알기 위한 장치.
		f.gotoxy(20, 28);
		cout << "                      ";
		f.gotoxy(20, 28);
		cout << x/2 << "," << y;

	}
	return;
}


gamemain :: ~gamemain() {
}