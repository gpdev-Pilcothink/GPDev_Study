#include <iostream>
#include "shop.h"
shop::shop(gamemain* main) {
	system("cls");
	int exit = 0;
	int select = 100;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■ 상점 입니다.                                                                                 ■" << endl;
	cout << "■ 무엇을 구매하시겠습니까? 나가기(0)                                                           ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■ 방어구:경량방어구(1), 경량합금방어구(2), 초경량합금방어구(3), 초경량초합금방어구(4)          ■" << endl;
	cout << "■ 무기:경량무기(5), 경량합금무기(6), 초경량합금무기(7), 초경량초합금무기(8)                    ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■   경량방어구&무기:1000원                                                                     ■" << endl;
	cout << "■   경량합금방어구&무기:20000원                                                                ■" << endl;
	cout << "■   초경량합금방어구&무기:1000000원                                                            ■" << endl;
	cout << "■   초경량초합금방어구&무기:4000000원                                                          ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	while (exit == 0) {
		cout << "현재 나의 돈 :" << main->shopmoney() << ", 입력:";
		cin >> select;
		while (cin.fail() == true || (select != 0 && select != 1 && select != 2 && select != 3 && select != 4 && select != 5 && select != 6 && select != 7 && select != 8)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
			cin >> select;
		}
		if (select == 1) {
			main->tradedown(1000,1);
		}
		else if (select == 2) {
			main->tradedown(20000,2);
		}
		else if (select == 3) {
			main->tradedown(1000000,3);
		}
		else if (select == 4) {
			main->tradedown(40000000,4);
		}
		else if (select == 5) {
			main->tradedown(1000,5);
		}
		else if (select == 6) {
			main->tradedown(20000,6);
		}
		else if (select == 7) {
			main->tradedown(1000000,7);
		}
		else if (select == 8) {
			main->tradedown(40000000,8);
		}
		else if (select == 0) {
			exit = 1;
		}
	}
	
}