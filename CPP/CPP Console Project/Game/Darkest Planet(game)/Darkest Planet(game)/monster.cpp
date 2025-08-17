#include <iostream>
#include <ctime>
#include "monster.h"
#include "gamemain.h"
#include "dungeon.h"
using namespace std;
monster::monster(gamemain* main) {
	this->damage = main->characterattack()+20;
	this->defence = main->characterattack();
}


int monster::run(int floor, gamemain *main) {
	srand(time(NULL));
	int monsterhp = (floor+1) * 100;
	int randomdefence = 0;
	int randomattack = 0;
	int exit = 0;
	int select = 0;
	int monsterattack = 0;  //들어간 데메지 계싼
	int characterattack = 0;  //캐릭터에 들어간 데미지 계싼
	while (main->characterhp() > 0 && monsterhp > 0 && exit ==0) {
		system("cls");
		randomdefence = rand() % ((floor + 2) * 10) + 1;  //랜덤 방어력
		randomattack = rand() % ((floor + 2) * 10) + 1;  //랜덤 공격력
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■  앞에 검은 물질이 빠르게 나를 향해 다가옵니다.                                               ■" << endl;
		cout << "■                                                                                              ■" << endl;
		cout << "■  가까이에서 보니 어떤 괴물이 나를 죽일 듯 해보입니다.                                        ■" << endl;
		cout << "■  어떻게 하시겠습니까?                                                                        ■" << endl;
		cout << "■  공격(1), 도망가기(2)                                                                        ■" << endl;
		cout << "■                                                                                              ■" << endl;
		cout << "■  tip:도망을 가면 랜덤한 확률로 게임 오버가 됩니다.(더 깊은 지하일수록 게임 오버가 쉽습니다.) ■" << endl;
		cout << "■                                                                                              ■" << endl;
		cout << "■                                                                                              ■" << endl;
		cout << "■                ●●●                                 ●●●●●●●●●                     ■" << endl;
		cout << "■               ●    ●                                     ●●●●●●●●●●●            ■" << endl;
		cout << "■                ●●●                                                 ●●●●●●●         ■" << endl;
		cout << "■                  ●                                                     ●●●●●●●       ■" << endl;
		cout << "■                ●●●●●                                                 ●●●●●●       ■" << endl;
		cout << "■               ● ●                                                ●●●●●●●●●●●●  ■" << endl;
		cout << "■              ● ● ●                                         ●●●●●●●●●●●●●●● ■" << endl;
		cout << "■                ●   ●                                       ●●●●●●●●●●●●●●●●■" << endl;
		cout << "■               ●     ●                                 ●●●●●●●●●●●●●●●●●● ■" << endl;
		cout << "■                                                          ●●●●●●●●●●●●●●●●●●■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "현재 나의 hp:" << main->characterhp() << endl;
		cout << "검은 괴물의 hp:" << monsterhp << endl;
		cout << "입력:";
		cin >> select;
		while (cin.fail() == true || (select != 1 && select != 2)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
			cin >> select;
		}
		if (select == 1) {
			monsterattack = damage-randomdefence; //몬스터에게 들어간 데미지=캐릭 데미지 - 몬스터의 랜덤 방어력
			if (monsterattack < 0)
				monsterattack = 0;
			characterattack = randomattack - defence; //캐릭터에게 들어간 데미지=몬스터의 랜덤 공격력 - 캐릭 방어력
			if (characterattack < 0)
				characterattack = 0;
			
			monsterhp -= monsterattack;
			main->hpdown(characterattack);
		}
		else if (select == 2) {
			exit = 1;
		}
	}
	if (exit == 1) {
		return 0;
	}
	else if (main->characterhp() < 0) {
		return 1;
	}
	else if (monsterhp < 0) {
		return 2;
	}
}