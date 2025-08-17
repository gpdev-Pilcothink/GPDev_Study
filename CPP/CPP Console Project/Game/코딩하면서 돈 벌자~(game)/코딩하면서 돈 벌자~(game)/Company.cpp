#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "Company.h"

Company::Company() {
}

void Company::run(character &cha) {
	function f;
	system("cls"); //��ũ�� 40*25
	int x = 2, y = 25;
	int escape = 0; //��Ż��
	int key = 0; //Ű�� �Է¹ޱ� ����
	int state = 0; //ĳ���� ���� ǥ��
	while (escape != 1) {
		if (state == 0) {
			//�� �ؿ��� ĳ���͸� ǥ���ϱ� ���� �ڵ�
			f.gotoxy(90, 3);
			cout << "                      ";
			f.gotoxy(90, 3);
			cout << "�̸�:" << cha.RETURN_name();
			f.gotoxy(90, 5);
			cout << "                      ";
			f.gotoxy(90, 5);
			cout << "��:" << cha.RETURN_money();
			f.gotoxy(90, 6);
			cout << "                      ";
			f.gotoxy(90, 6);
			cout << "��Ʈ����:" << cha.RETURN_stress();
			f.gotoxy(90, 7);
			cout << "                      ";
			f.gotoxy(90, 7);
			cout << "�����:" << cha.RETURN_hungry();
			f.gotoxy(90, 8);
			cout << "                      ";
			f.gotoxy(90, 8);
			cout << "�ǰ���:" << cha.RETURN_tired();
			//�� �ؿ��� �ʰ� ĳ���� �������� ������ �ڵ�
			f.gotoxy(0, 0);
			f.Draw_mainmap(map);
			state = 1;
		}
		f.gotoxy(x, y);
		cout << "��";;
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
		//�ؿ��� ȸ�縦 ���� ������ �ڵ�
		if ((x/2) == 0 && y == 24) {
			escape = 1;
		}
		//�ؿ��� ȸ�翡�� ���Ҷ� ���¸� �����ϴ� �ڵ�
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
				cout << "����ļ� �Ϸ��� ���������ϴ�.";
			}
			else if (cha.RETURN_tired() == 0) {
				f.gotoxy(90, 10);
				cout << "                       ";
				f.gotoxy(90, 10);
				cout << "�ǰ��ؼ� ���� ���մϴ�!";

			}
			
			f.gotoxy(90, 5);
			cout << "                    ";
			f.gotoxy(90, 5);
			cout << "��:" << cha.RETURN_money();
			f.gotoxy(90, 6);
			cout << "                     ";
			f.gotoxy(90, 6);
			cout << "��Ʈ����:" << cha.RETURN_stress();
			f.gotoxy(90, 7);
			cout << "                      ";
			f.gotoxy(90, 7);
			cout << "�����:" << cha.RETURN_hungry();
			f.gotoxy(90, 8);
			cout << "                       ";
			f.gotoxy(90, 8);
			cout << "�ǰ���:" << cha.RETURN_tired();
		}

		//�ؿ��� ��ǥ���� �˱� ���� ��ġ.
		f.gotoxy(20, 28);
		cout << "                      ";
		f.gotoxy(20, 28);
		cout << x / 2 << "," << y;
	}
}


Company::~Company() {
}