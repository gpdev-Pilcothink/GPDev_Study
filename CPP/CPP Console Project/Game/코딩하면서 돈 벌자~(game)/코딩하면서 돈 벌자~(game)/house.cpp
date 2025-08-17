#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "house.h"

House::House() {
}

int House::run(character& cha) {
	function f;
	system("cls"); //��ũ�� 40*25
	int x = 42, y = 25;
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
		//�ؿ��� ���� ���� �ϴ� �ڵ�
		if ((x / 2) == 4 && y == 3 && (key == 'A' || key == 'a')) {
			return 1;
		}
		//�ؿ��� ������ ���ϴ� ������ �����ϴ� �ڵ�
		if ((x / 2) == 33 && y == 3 && (key=='A' || key=='a')) {  //�ǰ����� ä��� �ڵ�
			cha.DEFAULT_tired();
			f.gotoxy(90, 8);
			cout << "                      ";
			f.gotoxy(90, 8);
			cout << "�ǰ���:" << cha.RETURN_tired();
		}
		//������ ������ �ڵ�
		if ((x / 2) == 21 && y == 26) {  //�ǰ����� ä��� �ڵ�
			return 0;
		}

		//�ؿ��� ��ǥ���� �˱� ���� ��ġ.
		f.gotoxy(20, 28);
		cout << "                      ";
		f.gotoxy(20, 28);
		cout << x / 2 << "," << y;
	}
	return 1;
}

House::~House() {
}