#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "store.h"
#include "Storepurchase.h"
Store_purchase::Store_purchase() {
}

void Store_purchase::run(character& cha) {
	function f;
	system("cls"); //��ũ�� 40*25
	int x = 2, y = 25;
	int escape = 0; //��Ż��
	int key = 0; //Ű�� �Է¹ޱ� ����
	int state = 0; //ĳ���� ���� ǥ��
	f.Draw_mainmap(map);
	f.gotoxy(5, 5);
	cout << "1. ����" << " ����: 10000��";
	f.gotoxy(5, 6);
	cout << "2. ������ ����" << " ����: 1600��";
	f.gotoxy(5, 7);
	cout << "                                       ";
	f.gotoxy(5, 7);
	cout << "3. �ڵ�å" << "����: " << cha.RETURN_ability() * 10 << "��";
	f.gotoxy(5, 8);
	cout << "������:ESC";
	while (key != ESC) {
		//�ؿ��� ĳ���� ���� ǥ��
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
		key = _getch();
		if (key == '1' &&cha.RETURN_money()>=10000) {
			cha.UP_hungry();
			cha.DOWN_money(10000);
		}
		else if (key == '2' && cha.RETURN_money() >= 1600) {
			cha.UP_tired();
			cha.DOWN_money(1600);
		}
		else if (key == '3' && cha.RETURN_money() >= cha.RETURN_ability() * 10) {
			cha.UP_ability();
			cha.DOWN_money(cha.RETURN_ability() * 10);
			f.gotoxy(5, 7);
			cout << "                                       ";
			f.gotoxy(5, 7);
			cout << "3. �ڵ�å" << "����: " << cha.RETURN_ability() * 10 << "��";
		}
		else if (key == '1' && cha.RETURN_money() < 10000) {
			f.gotoxy(5, 10);
			cout << "���� �����մϴ�.";
		}
		else if (key == '2' && cha.RETURN_money() < 1600) {
			f.gotoxy(5, 10);
			cout << "���� �����մϴ�.";
			
		}
		else if (key == '3' && cha.RETURN_money() < cha.RETURN_ability() * 10) {
			f.gotoxy(5, 10);
			cout << "���� �����մϴ�.";
			
		}
	}
	return;
}



Store_purchase::~Store_purchase() {
}