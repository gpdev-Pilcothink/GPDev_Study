#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
#include "store.h"
#include "Storepurchase.h"
Store_purchase::Store_purchase() {
}

void Store_purchase::run(character& cha) {
	function f;
	system("cls"); //맵크기 40*25
	int x = 2, y = 25;
	int escape = 0; //맵탈출
	int key = 0; //키값 입력받기 위함
	int state = 0; //캐릭터 상태 표시
	f.Draw_mainmap(map);
	f.gotoxy(5, 5);
	cout << "1. 음식" << " 가격: 10000원";
	f.gotoxy(5, 6);
	cout << "2. 에너지 음료" << " 가격: 1600원";
	f.gotoxy(5, 7);
	cout << "                                       ";
	f.gotoxy(5, 7);
	cout << "3. 코딩책" << "가격: " << cha.RETURN_ability() * 10 << "원";
	f.gotoxy(5, 8);
	cout << "나가기:ESC";
	while (key != ESC) {
		//밑에는 캐릭터 상태 표시
		f.gotoxy(90, 3);
		cout << "                      ";
		f.gotoxy(90, 3);
		cout << "이름:" << cha.RETURN_name();
		f.gotoxy(90, 5);
		cout << "                      ";
		f.gotoxy(90, 5);
		cout << "돈:" << cha.RETURN_money();
		f.gotoxy(90, 6);
		cout << "                      ";
		f.gotoxy(90, 6);
		cout << "스트레스:" << cha.RETURN_stress();
		f.gotoxy(90, 7);
		cout << "                      ";
		f.gotoxy(90, 7);
		cout << "배고픔:" << cha.RETURN_hungry();
		f.gotoxy(90, 8);
		cout << "                      ";
		f.gotoxy(90, 8);
		cout << "피곤함:" << cha.RETURN_tired();
		key = _getch();
		if (key == '1' &&cha.RETURN_money()>=10000) {
			cha.UP_hungry();
			cha.DOWN_money(10000);
		}
		else if (key == '2' && cha.RETURN_money() >= 1600) {
			cha.UP_tired();
			cha.DOWN_money(1600);
		}
		else if (key == '3' && cha.RETURN_money() >= cha.RETURN_ability() * 10) {
			cha.UP_ability();
			cha.DOWN_money(cha.RETURN_ability() * 10);
			f.gotoxy(5, 7);
			cout << "                                       ";
			f.gotoxy(5, 7);
			cout << "3. 코딩책" << "가격: " << cha.RETURN_ability() * 10 << "원";
		}
		else if (key == '1' && cha.RETURN_money() < 10000) {
			f.gotoxy(5, 10);
			cout << "돈이 부족합니다.";
		}
		else if (key == '2' && cha.RETURN_money() < 1600) {
			f.gotoxy(5, 10);
			cout << "돈이 부족합니다.";
			
		}
		else if (key == '3' && cha.RETURN_money() < cha.RETURN_ability() * 10) {
			f.gotoxy(5, 10);
			cout << "돈이 부족합니다.";
			
		}
	}
	return;
}



Store_purchase::~Store_purchase() {
}