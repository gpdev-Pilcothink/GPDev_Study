#include <iostream>
#include <string>
#include <cstdlib>
#include "character.h"
#include "gamemain.h"
using namespace std;

int confirm(int work, string name);

int work = 0;
string name;

void character::run() {
	int select = 0;
	int exitflag = 0;

	while (exitflag == 0) {
		system("cls");
		select = 0;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■ 당신은 검은 집을 탐사 해야합니다.                                                                  ■" << endl;
		cout << "■ 그전에 당신의 직업을 선택하고 이름을 입력하십시오                                                  ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■ 기사: 균형잡힌 신체 능력와 쉽게 물러서지 않는 용기 그리고 명예로 적과 싸웁니다.                    ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■ 전사: 강인한 힘으로 적에게 무자비함을 선사합니다.                                                  ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■ 궁수: 민첩한 신체 능력을 통해 어떠한 상황에서도 평정심을 유지합니다.                               ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■ 각 직업마다 적과 싸울때 얻는 이익과 불이익이 있으니 신중하게 선택하시길 바랍니다.                  ■" << endl;
		cout << "■                                                                                                    ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "기사(1), 전사(2), 궁수(3)" << endl;
		cin >> work;
		while (cin.fail() == true || (work != 1 && work != 2 && work != 3)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
			cout << "기사(1), 전사(2), 궁수(3)" << endl;
			cin >> work;
		}
while ((work == 1|| work==2 ||work==3) && (select!=1)) { //select가 1이 아니면 탈출하지 못함
			getchar();
			system("cls");
			cout << "이름을 입력하시오: " << endl;
			getline(cin, name);
			system("cls");
			cout << "당신의 이름이 " << name << "이 맞습니까?" << endl;
			cout << "맞다면 1번을 누른 후 enter" << endl;
			cout << "다시 설정을 하실려면 2번을 누른후 enter " << endl;
			cin >> select;
			while (cin.fail() == true  || select != 1 && select != 2) {
				cin.clear();
				cin.ignore(1000, '\n');
				cout << "잘못 입력 하셨습니다." << endl;
				cin >> select;
			}
		}
		if (select == 1) {   //seelct가 1일때 한번더 확인받음
			exitflag =confirm(work, name);  //되돌아오기일경우 0으로 다시 직업선택 1일경우 캐릭선택 while문 탈출
		}
	}
	///게임 메인화면 시작문
	gamemain main(name, work);
	main.run(&main);


	return;
}

int confirm(int work, string name)
{
	int select = 0;
	system("cls");
	if (work== 1) {
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■ 당신은 " << name << "입니다" << "                                                                  " << endl;
		cout << "■ 당신은 명예로운 기사입니다.                                                                        " << endl;
		cout << "■ 정말 검게 변한 자신의 집을 탐사하시겠습니까?                                                       " << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■                  ●●●     ▲                                                                     " << endl;
		cout << "■                 ●    ●    ■                                                                     " << endl;
		cout << "■                  ●●●     ■                                                                     " << endl;
		cout << "■                    ●     ■■■  ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■          ■■■  ●●●●● ■                                                                     " << endl;
		cout << "■          ■■■●  ●                                                                              " << endl;
		cout << "■          ■■■   ● ●                                                                            " << endl;
		cout << "■                 ●     ●                                                                          " << endl;
		cout << "■              ●        ●                                                                          " << endl;
		cout << "■                                   ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■                                                                                                    " << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	}
	else if (work == 2) {
		system("cls");
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■ 당신은 " << name << "입니다" << "                                                                  " << endl;
			cout << "■ 당신은 사냥을 즐기던 전사입니다.                                                                   " << endl;
			cout << "■ 정말 검게 변한 자신의 집을 탐사하시겠습니까?                                                       " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
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
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	}
	else if (work == 3) {
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■ 당신은 " << name << "입니다" << "                                                                  " << endl;
			cout << "■ 당신은 민첩한 궁수 입니다.                                                                         " << endl;
			cout << "■ 정말 검게 변한 자신의 집을 탐사하시겠습니까?                                                       " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                  ●●●                                                                            " << endl;
			cout << "■                 ●    ●  ■■                                                                     " << endl;
			cout << "■                  ●●●   ■  ■                                                                   " << endl;
			cout << "■                    ●  ● ■   ■     ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                    ●●---■----■->                                                               " << endl;
			cout << "■                    ●  ● ■   ■                                                                  " << endl;
			cout << "■                   ● ●   ■  ■                                                                   " << endl;
			cout << "■                 ●     ● ■■                                                                     " << endl;
			cout << "■              ●        ●                                                                          " << endl;
			cout << "■                                       ■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■                                                                                                    " << endl;
			cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	}
	cout << "확인(1), 돌아가기(2):" << endl;
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
		cout << "확인(1), 돌아가기(2):" << endl;
		cin >> select;
	}
	if (select == 1) {
		return 1;
	}
	else if(select == 2) {
		return 0;
	}
}