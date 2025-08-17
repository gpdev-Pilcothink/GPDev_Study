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
	int passrandom = 0; //���� ������ ������ ���� ���
	int passmonster = 0; //���� ��� �� ���� �ൿ �ľ�
	int gps = 1;
	while (exit == 0) {
		system("cls");
		if (gps == 1) {
			cout << "���� " << floor << "���Դϴ�." << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
			cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
			cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��   ��   ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "���� ���� ü��:" << main->characterhp() << endl;
			cout << "�Է�:";
		}
		else if (gps == 2) {
			cout << "���� " << floor << "���Դϴ�." << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
			cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
			cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��    ��    ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "���� ���� ü��:" << main->characterhp() << endl;
			cout << "�Է�:";
		}
		else if (gps == 3) {
			cout << "���� " << floor << "���Դϴ�." << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
			cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
			cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��   ��   ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "���� ���� ü��:" << main->characterhp() << endl;
			cout << "�Է�:";
		}
		else if (gps == 4) {
			cout << "���� " << floor << "���Դϴ�." << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
			cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
			cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��   ��   ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "���� ���� ü��:" << main->characterhp() << endl;
			cout << "�Է�:";
		}
		else if (gps == 5) {
			cout << "���� " << floor << "���Դϴ�." << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
			cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
			cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��    ��    ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ������������������" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��                                                              ��        ��          ��        ��" << endl;
			cout << "��������������������������������������������������" << endl;
			cout << "���� ���� ü��:" << main->characterhp() << endl;
			cout << "�Է�:";
		}
		else if (gps == 6) {
		cout << "���� " << floor << "���Դϴ�." << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
		cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
		cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��   ��   ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "���� ���� ü��:" << main->characterhp() << endl;
		cout << "�Է�:";
		}
		else if (gps == 7) {
		cout << "���� " << floor << "���Դϴ�." << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
		cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
		cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��   ��   ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "���� ���� ü��:" << main->characterhp() << endl;
		cout << "�Է�:";
		}
		else if (gps == 8) {
		cout << "���� " << floor << "���Դϴ�." << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
		cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
		cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��    ��    ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "���� ���� ü��:" << main->characterhp() << endl;
		cout << "�Է�:";
		}
		else if (gps == 9) {
		cout << "���� " << floor << "���Դϴ�." << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
		cout << "��  �� �� ���� ������ �̵��Ͻðڽ��ϱ�?                                                         ��" << endl;
		cout << "��  �̵�(1), ������(2)                                                                          ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ������������������" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��                                                              ��        ��          ��   ��   ��" << endl;
		cout << "��                                                              ��        ��          ��        ��" << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "���� ���� ü��:" << main->characterhp() << endl;
		cout << "�Է�:";
		}
		cin >> select;
		while (cin.fail() == true || (select != 1 && select != 2 )) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�." << endl;
			cin >> select;
		}
		if (select == 1) {
			random = rand() % 100; //���� ���� ������
			gps = rand() % 9+1; //�ڸ� �̵�
			if (gps==9) {
				stairs(&floor, &gps);
			}
			else if(random < 40) {
				monster mon(main);
				passmonster=mon.run(floor,main);
				if (passmonster == 0) { //��������
					passrandom = rand() % 100;
					if (passrandom < 10 + floor) //���� ����
						exit = 2;
				}
				else if (passmonster == 1) { //ĳ���� ����->���ӿ���
					exit = 2;
				}
				else if (passmonster == 2) {  //���� ����->���� ����
					cout << "���͸� �����̽��ϴ�.";
					main->huntmoney(floor);
					passrandom = rand() % 100;
					if (passrandom > 90) //������ ���
						main->upblackrock();

				}
			}
		}
		else if (select == 2) {
			exit = 1;
		}
	}
	if (exit == 2) { //���� ������ ���
		gameover over;
		over.run();
	}

}

void stairs(int *floor, int *gps) {
	int select = 0;
	system("cls");
	cout << "��������������������������������������������������" << endl;
	cout << "��  �Ʒ��� �������� ����� ã�ҽ��ϴ�.                                                          ��" << endl;
	cout << "��  ������ �ް� ������, ��ġ �յ� ������ �ʽ��ϴ�.                                              ��" << endl;
	cout << "��  ����� ���� �������ڽ��ϱ�?                                                                 ��" << endl;
	cout << "��  �̵�(1), ���(2)                                                                            ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��                                                                                              ��" << endl;
	cout << "��      ��                                                                                      ��" << endl;
	cout << "���������                                                                                ��" << endl;
	cout << "��             ��                                               ������������������" << endl;
	cout << "��               ��                      ��                     ��        ��          ��        ��" << endl;
	cout << "��                 ��                    ��                     ��        ��          ��        ��" << endl;
	cout << "��                   ��                  ��                     ��        ��          ��        ��" << endl;
	cout << "��                     ��                ��                     ������������������" << endl;
	cout << "��                       ����������                     ��        ��          ��        ��" << endl;
	cout << "��                                                              ��        ��          ��        ��" << endl;
	cout << "��                                                              ��        ��          ��        ��" << endl;
	cout << "��                                                              ������������������" << endl;
	cout << "��                                                              ��        ��          ��        ��" << endl;
	cout << "��                                                              ��        ��          ��   ��   ��" << endl;
	cout << "��                                                              ��        ��          ��        ��" << endl;
	cout << "��������������������������������������������������" << endl;
	cout << "�Է�:";
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�." << endl;
		cin >> select;
	}
	if (select == 1) {
		*floor += 1;
		*gps = 1;
	}
}