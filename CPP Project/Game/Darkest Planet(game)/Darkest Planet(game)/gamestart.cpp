#include <iostream>
#include "gamestory1.h"
using namespace std;

int main()
{
	int select = 0;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■       ■■■         ■        ■■■     ■    ■     ■■■       ■■■   ■■■■■      ■" << endl;
	cout << "■       ■    ■     ■  ■      ■   ■    ■  ■      ■     ■    ■            ■          ■" << endl;
	cout << "■       ■    ■    ■■■■     ■■■     ■■        ■■■■      ■■■       ■          ■" << endl;
	cout << "■       ■    ■   ■      ■    ■   ■    ■  ■      ■                 ■      ■          ■" << endl;
	cout << "■       ■■■    ■        ■   ■    ■   ■    ■      ■■■      ■■■       ■          ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■          ■■■■     ■              ■         ■        ■   ■■■■   ■■■■■        ■" << endl;
	cout << "■          ■     ■    ■            ■  ■       ■ ■     ■   ■             ■            ■" << endl;
	cout << "■          ■■■■     ■           ■■■■      ■   ■   ■   ■■■■       ■            ■" << endl;
	cout << "■          ■           ■          ■      ■     ■     ■ ■   ■             ■            ■" << endl;
	cout << "■          ■           ■■■■   ■        ■    ■        ■   ■■■■       ■            ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                        ●●●●                                              ■" << endl;
	cout << "■                                      ●   ●   ●                                            ■" << endl;
	cout << "■                                    ● ●●●●● ●                                          ■" << endl;
	cout << "■                                    ●    ●●    ●                                          ■" << endl;
	cout << "■                                      ●●    ●●                                            ■" << endl;
	cout << "■                                        ●●●●                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■                                                                                              ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "시작(1), 종료 (2):" << endl;
	cin >> select;
	while (cin.fail() == true || (select !=1 && select !=2) ) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "잘못 입력하였습니다. 다시 입력 하십시오." << endl;
		cout << "시작(1), 종료(2) :" << endl;
		cin >> select;
	}

	if (select == 1) {
		gamestory1 story;
		story.run();
	}
	return 0;
}