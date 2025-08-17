#include <iostream>
#include <string>
#include  "character.h"
#include "function.h"
using namespace std;

/* 멤버 변수 목록
	string name; //이름짓기
	int money; //0원부터 시작
	int stress; //0~100
	int hungry; //0~100;
	int tired; //0~100;
	long int ability;
*/


character::character() { //캐릭터 생성자
	name = "";
	money = 0;
	stress = 0;
	hungry = 100;
	tired = 100; //
	ability = 10000; //한번에 벌 수 있는 돈
}

//캐릭터 생성 부분 시작
void character::make() {
	function f;
	int select = 0;

	while (select != 1) {//맵크기 40*22
		system("cls");  
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■                                                                            ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		getchar(); // start 쪽에서 1번 누르고 엔터를 버리기 위함.
		f.gotoxy(6, 5);
		cout << "이름을 입력 하십시오: " << endl;
		f.gotoxy(6, 6);
		cout << "이름:";
		getline(cin, name);
		f.gotoxy(6, 8);
		cout << "당신의 이름이 " << name << "이 맞습니까?" << endl;
		f.gotoxy(6, 9);
		cout << "맞다면 1번을 누른 후 enter를 누르시오" << endl;
		f.gotoxy(6, 10);
		cout << "다시 설정을 원한다면 2번을 누른후 enter를 누르시오 " << endl;
		f.gotoxy(6, 11);
		cout << "입력:";
		cin >> select;
		while (cin.fail() == true || select != 1 && select != 2) {
			cin.clear();
			cin.ignore(1000, '\n');
			f.gotoxy(7, 13);
			cout << "잘못 입력 하셨습니다." << endl;
			f.gotoxy(11,11);
			cout << "                  ";
			f.gotoxy(11, 11);
			cin >> select;
		}
	}
	return;
}
//캐릭터 생성 부분 끝
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
//캐릭터 요소를 다루는 클래스
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

character::~character() { //캐릭터 소멸자
}