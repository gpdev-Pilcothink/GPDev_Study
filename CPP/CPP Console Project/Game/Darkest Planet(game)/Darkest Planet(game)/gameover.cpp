#include <iostream>
#include "gameover.h"
using namespace std;

int gameover::run() {
	int select = 0;
	while (1) {
		system("cls");
		cout << "��������������������������������������������������" << endl;
		cout << "��                                                                                              ��" << endl;
		cout << "��                                         GAME OVER                                            ��" << endl;
		cout << "��                             ������ ���� �� ��ĵǾ����ϴ�.                               ��" << endl;
		cout << "��                                      â�� �����Ͻʽÿ�.                                      ��" << endl;
		cout << "��                                                                                              ��" << endl;
		cout << "��������������������������������������������������" << endl;
		cin >> select;
		if (cin.fail() == true) {
			cin.clear();
			cin.ignore(1000, '\n');
		}
			
	}

}
