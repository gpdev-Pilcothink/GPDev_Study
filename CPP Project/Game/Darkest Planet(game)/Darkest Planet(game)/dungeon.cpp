#include <iostream>
#include <cstdlib>
#include <ctime>
#include "gamemain.h"
#include "dungeon.h"
#include "monster.h"
#include "gameover.h"
void stairs(int* floor, int* gps);

dungeon::dungeon(gamemain* main) {
	srand(time(NULL));
	this->floor = 0;
	int exit = 0;
	int select =0;
	int random = 0;
	int passrandom = 0; //몬스터 만나고 난후의 랜덤 결과
	int passmonster = 0; //몬스터 잡고 난 후의 행동 파악
	int gps = 1;
	while (exit == 0) {
		system("cls");
		if (gps == 1) {
			cout << "지하 " << floor << "층입니다." << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
			cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
			cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■   ●   ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "현재 나의 체력:" << main->characterhp() << endl;
			cout << "입력:";
		}
		else if (gps == 2) {
			cout << "지하 " << floor << "층입니다." << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
			cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
			cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■    ●    ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "현재 나의 체력:" << main->characterhp() << endl;
			cout << "입력:";
		}
		else if (gps == 3) {
			cout << "지하 " << floor << "층입니다." << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
			cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
			cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■   ●   ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "현재 나의 체력:" << main->characterhp() << endl;
			cout << "입력:";
		}
		else if (gps == 4) {
			cout << "지하 " << floor << "층입니다." << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
			cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
			cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■   ●   ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "현재 나의 체력:" << main->characterhp() << endl;
			cout << "입력:";
		}
		else if (gps == 5) {
			cout << "지하 " << floor << "층입니다." << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
			cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
			cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■    ●    ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■                                                              ■        ■          ■        ■" << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "현재 나의 체력:" << main->characterhp() << endl;
			cout << "입력:";
		}
		else if (gps == 6) {
		cout << "지하 " << floor << "층입니다." << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
		cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
		cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■   ●   ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "현재 나의 체력:" << main->characterhp() << endl;
		cout << "입력:";
		}
		else if (gps == 7) {
		cout << "지하 " << floor << "층입니다." << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
		cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
		cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■   ●   ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "현재 나의 체력:" << main->characterhp() << endl;
		cout << "입력:";
		}
		else if (gps == 8) {
		cout << "지하 " << floor << "층입니다." << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
		cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
		cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■    ●    ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "현재 나의 체력:" << main->characterhp() << endl;
		cout << "입력:";
		}
		else if (gps == 9) {
		cout << "지하 " << floor << "층입니다." << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
		cout << "■  알 수 없는 곳으로 이동하시겠습니까?                                                         ■" << endl;
		cout << "■  이동(1), 나가기(2)                                                                          ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■                                                              ■        ■          ■   ●   ■" << endl;
		cout << "■                                                              ■        ■          ■        ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "현재 나의 체력:" << main->characterhp() << endl;
		cout << "입력:";
		}
		cin >> select;
		while (cin.fail() == true || (select != 1 && select != 2 )) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
			cin >> select;
		}
		if (select == 1) {
			random = rand() % 100; //몬스터 랜덤 만나기
			gps = rand() % 9+1; //자리 이동
			if (gps==9) {
				stairs(&floor, &gps);
			}
			else if(random < 40) {
				monster mon(main);
				passmonster=mon.run(floor,main);
				if (passmonster == 0) { //도망가기
					passrandom = rand() % 100;
					if (passrandom < 10 + floor) //게임 오버
						exit = 2;
				}
				else if (passmonster == 1) { //캐릭터 죽음->게임오버
					exit = 2;
				}
				else if (passmonster == 2) {  //몬스터 잡음->랜덤 보상
					cout << "몬스터를 잡으셨습니다.";
					main->huntmoney(floor);
					passrandom = rand() % 100;
					if (passrandom > 90) //검은돌 얻기
						main->upblackrock();

				}
			}
		}
		else if (select == 2) {
			exit = 1;
		}
	}
	if (exit == 2) { //게임 오버의 경우
		gameover over;
		over.run();
	}

}

void stairs(int *floor, int *gps) {
	int select = 0;
	system("cls");
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■  아래로 내려가는 계단을 찾았습니다.                                                          ■" << endl;
	cout << "■  랜턴을 달고 있지만, 한치 앞도 보이지 않습니다.                                              ■" << endl;
	cout << "■  계단을 따라 내려가겠습니까?                                                                 ■" << endl;
	cout << "■  이동(1), 취소(2)                                                                            ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■      ●                                                                                      ■" << endl;
	cout << "■■■■■■■■                                                                                ■" << endl;
	cout << "■             ■                                               ■■■■■■■■■■■■■■■■■" << endl;
	cout << "■               ■                      ■                     ■        ■          ■        ■" << endl;
	cout << "■                 ■                    ■                     ■        ■          ■        ■" << endl;
	cout << "■                   ■                  ■                     ■        ■          ■        ■" << endl;
	cout << "■                     ■                ■                     ■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                       ■■■■■■■■■                     ■        ■          ■        ■" << endl;
	cout << "■                                                              ■        ■          ■        ■" << endl;
	cout << "■                                                              ■        ■          ■        ■" << endl;
	cout << "■                                                              ■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                              ■        ■          ■        ■" << endl;
	cout << "■                                                              ■        ■          ■   ●   ■" << endl;
	cout << "■                                                              ■        ■          ■        ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "입력:";
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
		cin >> select;
	}
	if (select == 1) {
		*floor += 1;
		*gps = 1;
	}
}