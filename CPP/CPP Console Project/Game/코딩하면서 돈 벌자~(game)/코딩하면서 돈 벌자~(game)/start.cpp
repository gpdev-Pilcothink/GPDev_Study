#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
using namespace std;



int main() {
	function f;
	//맵크기(40*22)
	int select = 0;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                 ■■■               ●●  ■■                            ■" << endl;
	cout << "■               ■    ■             ●    ●■■                            ■" << endl;
	cout << "■             ■      ■               ●●  ■■                            ■" << endl;
	cout << "■           ■        ■                ●   ■■                            ■" << endl;
	cout << "■           ■■■■■■    ●●●●●●●   ■■                            ■" << endl;
	cout << "■         ■■■■■■■■■■          ●   ■■                            ■" << endl;
	cout << "■                           ■    ●●●●   ■■                            ■" << endl;
	cout << "■                           ■    ●  ● ■■■■                            ■" << endl;
	cout << "■                           ■    ●  ● ■■                                ■" << endl;
	cout << "■                           ■    ●  ● ■■                                ■" << endl;
	cout << "■                           ■    ●  ● ■■                                ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■    코딩 하면서 돈벌자~                                                     ■" << endl;
	cout << "■    시작(1), 종료(2)                                                        ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■                                                                            ■" << endl;
	cout << "■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■" << endl;
	f.gotoxy(8, 17);
	cout << "입력:";
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		f.gotoxy(8, 18);
		cout << "잘못 입력하였습니다. 다시 입력 하십시오.";
		f.gotoxy(13, 17);
		cout << "                  ";
		f.gotoxy(13, 17);
		cin >> select;
	}
	if (select == 1) {
		character cha; //캐릭터 객체 생성
		cha.make();   //캐릭터 만들기
		gamemain gotomain; ///메인화면으로 이동
		gotomain.run(&cha);  //메인화면으로 가면서 cha의 주소를 넘겨버림
	}
	f.gotoxy(0, 28);
	return 0;
}