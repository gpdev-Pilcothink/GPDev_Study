#include <iostream>
#include "gamemain.h"
#include "shop.h"
#include "dungeon.h"
using namespace std;

gamemain::gamemain(string name, int work) {
	/*
	string name;  //캐릭터 이름의 약자
	int work;    //캐릭터 직업의 약자
	int money;  //돈
	int damage; // 데미지
	int defence; //방어력
	int courage; //용기 (100이 기본상태) 1이 감소할때마다 피해 1% 감소
	int protective; //0.기본 방어구 1.경량화 방어구 2.경량 합금 방어구 3. 초경량 합금 방어구 4. 초경량 초합금 방어구
	int weapon; //0. 기본 무기, 1. 경량화 무기. 2. 경량 합금 무기 3.초경량 합금 방어구 4. 초경량 초합금 방어구
	int black; //검은 기운 강화 횟수
	int blackrock; //검은 돌 개수
	int stage; //0. 아무런 보스도 못잡음, 1, 첫번째 보스 잡음 , 2.두 번째 보스 잡음, 3. 최종보스 잡음(엔딩)
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
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■ 당신은 " << name << "입니다" << "                                                                  " << endl;
			cout << "■ 당신은 명예로운 기사입니다.                                                                        " << endl;
			cout << "■ 돈:"<<money<<"                                                                                     " << endl;
			cout << "■ 데미지:" <<damage <<", 방어력:"<<defence <<"                                                       " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■ 당신이 하고 싶은 행동을 고르시오.    1.(상점), 2.(검은 사원 가기), 3.(종료)                        " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                  ●●●     ▲                                                                     " << endl;
			cout << "■                 ●    ●    ■                                                                     " << endl;
			cout << "■                  ●●●     ■                                                                     " << endl;
			cout << "■                    ●     ■■■   ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■          ■■■  ●●●●● ■                                                                     " << endl;
			cout << "■          ■■■●  ●                                                                              " << endl;
			cout << "■          ■■■   ● ●                                                                            " << endl;
			cout << "■                 ●     ●                                                                          " << endl;
			cout << "■              ●        ●                                                                          " << endl;
			cout << "■                                    ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		}
		else if (work == 2) {
			system("cls");
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■ 당신은 " << name << "입니다" << "                                                                  " << endl;
			cout << "■ 당신은 사냥을 즐기던 전사입니다.                                                                   " << endl;
			cout << "■ 돈:" << money << "                                                                                     " << endl;
			cout << "■ 데미지:" << damage << ", 방어력:" << defence << "                                                       " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■ 당신이 하고 싶은 행동을 고르시오.    1.(상점), 2.(검은 사원 가기), 3.(종료)                        " << endl;
			cout << "■                             ▲                                                                     " << endl;
			cout << "■                             ■                                                                     " << endl;
			cout << "■                  ●●●     ■                                                                     " << endl;
			cout << "■                 ●    ●    ■                                                                     " << endl;
			cout << "■                  ●●●     ■                                                                     " << endl;
			cout << "■                    ●     ■■■  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                    ●●●● ■                                                                     " << endl;
			cout << "■                    ●       ■                                                                     " << endl;
			cout << "■                   ● ●                                                                            " << endl;
			cout << "■                 ●     ●                                                                          " << endl;
			cout << "■              ●        ●                                                                          " << endl;
			cout << "■                                   ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		}
		else if (work == 3) {
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■ 당신은 " << name << "입니다" << "                                                                  " << endl;
			cout << "■ 당신은 민첩한 궁수 입니다.                                                                         " << endl;
			cout << "■ 돈:" << money << "                                                                                     " << endl;
			cout << "■ 데미지:" << damage << ", 방어력:" << defence << "                                                       " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■ 당신이 하고 싶은 행동을 고르시오.    1.(상점), 2.(검은 사원 가기), 3.(종료)                        " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                  ●●●                                                                            " << endl;
			cout << "■                 ●    ●  ■■                                                                     " << endl;
			cout << "■                  ●●●   ■  ■                                                                   " << endl;
			cout << "■                    ●  ● ■   ■    ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                    ●●---■----■->                                                               " << endl;
			cout << "■                    ●  ● ■   ■                                                                  " << endl;
			cout << "■                   ● ●   ■  ■                                                                   " << endl;
			cout << "■                 ●     ● ■■                                                                     " << endl;
			cout << "■              ●        ●                                                                          " << endl;
			cout << "■                                      ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		}
		cout << "입력:";
		cin >> select;
		while (cin.fail() == true || (select != 1 && select != 2 && select != 3)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
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
		cout << "돈이 부족합니다." << endl;
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