#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "Company.h"

Company::Company() {
}

void Company::run(character &cha) {
	function f;
	system("cls"); //맵크기 40*25
	int x = 2, y = 25;
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
		//밑에는 회사를 빠져 나가는 코드
		if ((x/2) == 0 && y == 24) {
			escape = 1;
		}
		//밑에는 회사에서 일할때 상태를 관리하는 코드
		if ((x / 2) == 8 && y == 22 &&(key=='a'|| key=='A')) {
			if (cha.RETURN_tired() > 0 && cha.RETURN_hungry()>0) {
				cha.EARN_money();
				cha.DOWN_tired();
				cha.DOWN_hungry();
			}
			else if (cha.RETURN_hungry() == 0 && cha.RETURN_tired() > 0) {
				cha.EARN_hungrymoney();
				cha.DOWN_tired();
				f.gotoxy(90, 10);
				cout << "                             ";
				f.gotoxy(90, 10);
				cout << "배고파서 일률이 떨어졌습니다.";
			}
			else if (cha.RETURN_tired() == 0) {
				f.gotoxy(90, 10);
				cout << "                       ";
				f.gotoxy(90, 10);
				cout << "피곤해서 일을 못합니다!";

			}
			
			f.gotoxy(90, 5);
			cout << "                    ";
			f.gotoxy(90, 5);
			cout << "돈:" << cha.RETURN_money();
			f.gotoxy(90, 6);
			cout << "                     ";
			f.gotoxy(90, 6);
			cout << "스트레스:" << cha.RETURN_stress();
			f.gotoxy(90, 7);
			cout << "                      ";
			f.gotoxy(90, 7);
			cout << "배고픔:" << cha.RETURN_hungry();
			f.gotoxy(90, 8);
			cout << "                       ";
			f.gotoxy(90, 8);
			cout << "피곤함:" << cha.RETURN_tired();
		}

		//밑에는 좌표값을 알기 위한 장치.
		f.gotoxy(20, 28);
		cout << "                      ";
		f.gotoxy(20, 28);
		cout << x / 2 << "," << y;
	}
}


Company::~Company() {
}