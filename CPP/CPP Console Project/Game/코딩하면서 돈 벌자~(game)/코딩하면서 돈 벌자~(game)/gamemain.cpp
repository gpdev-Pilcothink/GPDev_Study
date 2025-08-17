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
	int state = 0; //ĳ���� ���� ǥ��
	while (select != 1) {
		if (state == 0) {
			system("cls");
			//�� �ؿ��� ĳ���͸� ǥ���ϱ� ���� �ڵ�
			f.gotoxy(90, 3);
			cout << "                                                          ";
			f.gotoxy(90, 3);
			cout << "�̸�:" << cha->RETURN_name();
			f.gotoxy(90, 5);
			cout << "                      ";
			f.gotoxy(90, 5);
			cout << "��:" << cha->RETURN_money();
			f.gotoxy(90, 6);
			cout << "                      ";
			f.gotoxy(90, 6);
			cout << "��Ʈ����:" << cha->RETURN_stress();
			f.gotoxy(90, 7);
			cout << "                      ";
			f.gotoxy(90, 7);
			cout << "�����:" << cha->RETURN_hungry();
			f.gotoxy(90, 8);
			cout << "                      ";
			f.gotoxy(90, 8);
			cout << "�ǰ���:" << cha->RETURN_tired();
			f.gotoxy(90, 9);
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

		//�ؿ��� ��ǥ���� �˱� ���� ��ġ.
		f.gotoxy(20, 28);
		cout << "                      ";
		f.gotoxy(20, 28);
		cout << x/2 << "," << y;

	}
	return;
}


gamemain :: ~gamemain() {
}