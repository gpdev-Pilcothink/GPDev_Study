#include <iostream>
#include <string>
#include  "character.h"
#include "function.h"
using namespace std;

/* ��� ���� ���
	string name; //�̸�����
	int money; //0������ ����
	int stress; //0~100
	int hungry; //0~100;
	int tired; //0~100;
	long int ability;
*/


character::character() { //ĳ���� ������
	name = "";
	money = 0;
	stress = 0;
	hungry = 100;
	tired = 100; //
	ability = 10000; //�ѹ��� �� �� �ִ� ��
}

//ĳ���� ���� �κ� ����
void character::make() {
	function f;
	int select = 0;

	while (select != 1) {//��ũ�� 40*22
		system("cls");  
		cout << "�����������������������������������������" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "��                                                                            ��" << endl;
		cout << "�����������������������������������������" << endl;
		getchar(); // start �ʿ��� 1�� ������ ���͸� ������ ����.
		f.gotoxy(6, 5);
		cout << "�̸��� �Է� �Ͻʽÿ�: " << endl;
		f.gotoxy(6, 6);
		cout << "�̸�:";
		getline(cin, name);
		f.gotoxy(6, 8);
		cout << "����� �̸��� " << name << "�� �½��ϱ�?" << endl;
		f.gotoxy(6, 9);
		cout << "�´ٸ� 1���� ���� �� enter�� �����ÿ�" << endl;
		f.gotoxy(6, 10);
		cout << "�ٽ� ������ ���Ѵٸ� 2���� ������ enter�� �����ÿ� " << endl;
		f.gotoxy(6, 11);
		cout << "�Է�:";
		cin >> select;
		while (cin.fail() == true || select != 1 && select != 2) {
			cin.clear();
			cin.ignore(1000, '\n');
			f.gotoxy(7, 13);
			cout << "�߸� �Է� �ϼ̽��ϴ�." << endl;
			f.gotoxy(11,11);
			cout << "                  ";
			f.gotoxy(11, 11);
			cin >> select;
		}
	}
	return;
}
//ĳ���� ���� �κ� ��
int character::RETURN_money() {
	return money;
}
int character::RETURN_stress() {
	return stress;
}
int character::RETURN_hungry() {
	return hungry;
}
int character::RETURN_tired() {
	return tired;
}
string character::RETURN_name() {
	return name;
}
int character::RETURN_ability() {
	return ability;
}
//ĳ���� ��Ҹ� �ٷ�� Ŭ����
void character::EARN_money() {
	money += ability;
}
void character::EARN_hungrymoney() {
	money += ability/100;
}
void character::DOWN_hungry() {
	hungry--;
}
void character::DOWN_tired() {
	tired--;

}
void character::DOWN_money(int money) {
	this->money -= money;
}
void character::UP_hungry() {
	hungry += 10;
}
void character::UP_tired() {
	tired += 1;

}
void character::UP_ability() {
	ability += 1000;

}
void character::DEFAULT_tired() {
	tired = 100;
}

character::~character() { //ĳ���� �Ҹ���
}