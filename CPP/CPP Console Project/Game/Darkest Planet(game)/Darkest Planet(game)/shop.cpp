#include <iostream>
#include "shop.h"
shop::shop(gamemain* main) {
	system("cls");
	int exit = 0;
	int select = 100;
	cout << "��������������������������������������������������" << endl;
	cout << "�� ���� �Դϴ�.                                                                                 ��" << endl;
	cout << "�� ������ �����Ͻðڽ��ϱ�? ������(0)                                                           ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "�� ��:�淮��(1), �淮�ձݹ�(2), �ʰ淮�ձݹ�(3), �ʰ淮���ձݹ�(4)          ��" << endl;
	cout << "�� ����:�淮����(5), �淮�ձݹ���(6), �ʰ淮�ձݹ���(7), �ʰ淮���ձݹ���(8)                    ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��   �淮��&����:1000��                                                                     ��" << endl;
	cout << "��   �淮�ձݹ�&����:20000��                                                                ��" << endl;
	cout << "��   �ʰ淮�ձݹ�&����:1000000��                                                            ��" << endl;
	cout << "��   �ʰ淮���ձݹ�&����:4000000��                                                          ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��������������������������������������������������" << endl;
	while (exit == 0) {
		cout << "���� ���� �� :" << main->shopmoney() << ", �Է�:";
		cin >> select;
		while (cin.fail() == true || (select != 0 && select != 1 && select != 2 && select != 3 && select != 4 && select != 5 && select != 6 && select != 7 && select != 8)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�." << endl;
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