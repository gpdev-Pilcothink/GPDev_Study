#include <iostream>
#include "gameover.h"
using namespace std;

int gameover::run() {
	int select = 0;
	while (1) {
		system("cls");
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cout << "■                                                                                              ■" << endl;
		cout << "■                                         GAME OVER                                            ■" << endl;
		cout << "■                             마을이 검은 기운에 잠식되었습니다.                               ■" << endl;
		cout << "■                                      창을 종료하십시오.                                      ■" << endl;
		cout << "■                                                                                              ■" << endl;
		cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
		cin >> select;
		if (cin.fail() == true) {
			cin.clear();
			cin.ignore(1000, '\n');
		}
			
	}

}
