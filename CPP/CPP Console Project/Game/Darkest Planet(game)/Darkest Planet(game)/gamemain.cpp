#include <iostream>
#include "gamemain.h"
#include "shop.h"
#include "dungeon.h"
using namespace std;

gamemain::gamemain(string name, int work) {
	/*
	string name;  //ĳ���� �̸��� ����
	int work;    //ĳ���� ������ ����
	int money;  //��
	int damage; // ������
	int defence; //����
	int courage; //��� (100�� �⺻����) 1�� �����Ҷ����� ���� 1% ����
	int protective; //0.�⺻ �� 1.�淮ȭ �� 2.�淮 �ձ� �� 3. �ʰ淮 �ձ� �� 4. �ʰ淮 ���ձ� ��
	int weapon; //0. �⺻ ����, 1. �淮ȭ ����. 2. �淮 �ձ� ���� 3.�ʰ淮 �ձ� �� 4. �ʰ淮 ���ձ� ��
	int black; //���� ��� ��ȭ Ƚ��
	int blackrock; //���� �� ����
	int stage; //0. �ƹ��� ������ ������, 1, ù��° ���� ���� , 2.�� ��° ���� ����, 3. �������� ����(����)
	*/
	this->name = name;
	this->work = work;
	hp = 100;
	money = 500;
	damage = 10+protective*10*black;
	defence = 10+protective*10*black;
	courage = 0;
	protective = 0;
	weapon = 0;
	black = 0;
	blackrock = 0;
	stage = 0;
	
}

int select = 0;
void gamemain::run(gamemain *main) {
	int exitflag = 0;
	while (stage != 3 && exitflag==0) {
		this->hp = 100 + protective * 100;
		this->damage = 10 + weapon * 10 * (black+1);
		this->defence = 10 + protective * 10 * (black+1);
		system("cls");
		if (work == 1) {
			cout << "���������������������������������������" << endl;
			cout << "�� ����� " << name << "�Դϴ�" << "                                                                  " << endl;
			cout << "�� ����� ���ο� ����Դϴ�.                                                                        " << endl;
			cout << "�� ��:"<<money<<"                                                                                     " << endl;
			cout << "�� ������:" <<damage <<", ����:"<<defence <<"                                                       " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "�� ����� �ϰ� ���� �ൿ�� ���ÿ�.    1.(����), 2.(���� ��� ����), 3.(����)                        " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                  �ܡܡ�     ��                                                                     " << endl;
			cout << "��                 ��    ��    ��                                                                     " << endl;
			cout << "��                  �ܡܡ�     ��                                                                     " << endl;
			cout << "��                    ��     ����   �����������������������������������" << endl;
			cout << "��          ����  �ܡܡܡܡ� ��                                                                     " << endl;
			cout << "��          �����  ��                                                                              " << endl;
			cout << "��          ����   �� ��                                                                            " << endl;
			cout << "��                 ��     ��                                                                          " << endl;
			cout << "��              ��        ��                                                                          " << endl;
			cout << "��                                    �����������������������������������" << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��������������������������������������" << endl;
		}
		else if (work == 2) {
			system("cls");
			cout << "��������������������������������������" << endl;
			cout << "�� ����� " << name << "�Դϴ�" << "                                                                  " << endl;
			cout << "�� ����� ����� ���� �����Դϴ�.                                                                   " << endl;
			cout << "�� ��:" << money << "                                                                                     " << endl;
			cout << "�� ������:" << damage << ", ����:" << defence << "                                                       " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "�� ����� �ϰ� ���� �ൿ�� ���ÿ�.    1.(����), 2.(���� ��� ����), 3.(����)                        " << endl;
			cout << "��                             ��                                                                     " << endl;
			cout << "��                             ��                                                                     " << endl;
			cout << "��                  �ܡܡ�     ��                                                                     " << endl;
			cout << "��                 ��    ��    ��                                                                     " << endl;
			cout << "��                  �ܡܡ�     ��                                                                     " << endl;
			cout << "��                    ��     ����  �����������������������������������" << endl;
			cout << "��                    �ܡܡܡ� ��                                                                     " << endl;
			cout << "��                    ��       ��                                                                     " << endl;
			cout << "��                   �� ��                                                                            " << endl;
			cout << "��                 ��     ��                                                                          " << endl;
			cout << "��              ��        ��                                                                          " << endl;
			cout << "��                                   �����������������������������������" << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��������������������������������������" << endl;
		}
		else if (work == 3) {
			cout << "��������������������������������������" << endl;
			cout << "�� ����� " << name << "�Դϴ�" << "                                                                  " << endl;
			cout << "�� ����� ��ø�� �ü� �Դϴ�.                                                                         " << endl;
			cout << "�� ��:" << money << "                                                                                     " << endl;
			cout << "�� ������:" << damage << ", ����:" << defence << "                                                       " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "�� ����� �ϰ� ���� �ൿ�� ���ÿ�.    1.(����), 2.(���� ��� ����), 3.(����)                        " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                  �ܡܡ�                                                                            " << endl;
			cout << "��                 ��    ��  ���                                                                     " << endl;
			cout << "��                  �ܡܡ�   ��  ��                                                                   " << endl;
			cout << "��                    ��  �� ��   ��    �����������������������������������" << endl;
			cout << "��                    �ܡ�---��----��->                                                               " << endl;
			cout << "��                    ��  �� ��   ��                                                                  " << endl;
			cout << "��                   �� ��   ��  ��                                                                   " << endl;
			cout << "��                 ��     �� ���                                                                     " << endl;
			cout << "��              ��        ��                                                                          " << endl;
			cout << "��                                      �����������������������������������" << endl;
			cout << "��                                                                                                    " << endl;
			cout << "��                                                                                                    " << endl;
			cout << "���������������������������������������" << endl;
		}
		cout << "�Է�:";
		cin >> select;
		while (cin.fail() == true || (select != 1 && select != 2 && select != 3)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�." << endl;
			cin >> select;
		}
		if (select == 1) {
			shop shopping(main);
		}
		else if (select == 2) {
			dungeon blackhouse(main);
		}
		else if (select == 3) {
			exitflag = 1;
		}
	}
}
void gamemain::tradedown(int downmoney,int select) {
	if (this->money - downmoney < 0) {
		cout << "���� �����մϴ�." << endl;
	}
	else if (select == 1) {
		this->protective = 1;
		this->money -= downmoney;
	}
	else if (select == 2) {
		this->protective = 2;
		this->money -= downmoney;
	}
	else if (select == 3) {
		this->protective = 3;
		this->money -= downmoney;
	}
	else if (select == 4) {
		this->protective = 4;
		this->money -= downmoney;
	}
	else if (select == 5) {
		this->protective = 1;
		this->money -= downmoney;
	}
	else if (select == 6) {
		this->protective = 2;
		this->money -= downmoney;
	}
	else if (select == 7) {
		this->protective = 3;
		this->money -= downmoney;
	}
	else if (select == 8) {
		this->protective = 4;
		this->money -= downmoney;
	}
	return;
}
int gamemain::shopmoney() {
	return money;
}
int gamemain::characterhp() {
	return hp;
}
int gamemain::characterdefence() {
	return defence;
}
int gamemain::characterattack() {
	return damage;
}
void gamemain::huntmoney(int floor) {
	money += (floor+1) * 100;
}
void gamemain::upblackrock() {
	blackrock += 1;
}
void gamemain::hpdown(int attack) {
	hp -= attack;
}