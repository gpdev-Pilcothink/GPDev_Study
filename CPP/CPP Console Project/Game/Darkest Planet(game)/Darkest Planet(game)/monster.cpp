#include <iostream>
#include <ctime>
#include "monster.h"
#include "gamemain.h"
#include "dungeon.h"
using namespace std;
monster::monster(gamemain* main) {
	this->damage = main->characterattack()+20;
	this->defence = main->characterattack();
}


int monster::run(int floor, gamemain *main) {
	srand(time(NULL));
	int monsterhp = (floor+1) * 100;
	int randomdefence = 0;
	int randomattack = 0;
	int exit = 0;
	int select = 0;
	int monsterattack = 0;  //�� ������ ���
	int characterattack = 0;  //ĳ���Ϳ� �� ������ ���
	while (main->characterhp() > 0 && monsterhp > 0 && exit ==0) {
		system("cls");
		randomdefence = rand() % ((floor + 2) * 10) + 1;  //���� ����
		randomattack = rand() % ((floor + 2) * 10) + 1;  //���� ���ݷ�
		cout << "��������������������������������������������������" << endl;
		cout << "��  �տ� ���� ������ ������ ���� ���� �ٰ��ɴϴ�.                                               ��" << endl;
		cout << "��                                                                                              ��" << endl;
		cout << "��  �����̿��� ���� � ������ ���� ���� �� �غ��Դϴ�.                                        ��" << endl;
		cout << "��  ��� �Ͻðڽ��ϱ�?                                                                        ��" << endl;
		cout << "��  ����(1), ��������(2)                                                                        ��" << endl;
		cout << "��                                                                                              ��" << endl;
		cout << "��  tip:������ ���� ������ Ȯ���� ���� ������ �˴ϴ�.(�� ���� �����ϼ��� ���� ������ �����ϴ�.) ��" << endl;
		cout << "��                                                                                              ��" << endl;
		cout << "��                                                                                              ��" << endl;
		cout << "��                �ܡܡ�                                 �ܡܡܡܡܡܡܡܡ�                     ��" << endl;
		cout << "��               ��    ��                                     �ܡܡܡܡܡܡܡܡܡܡ�            ��" << endl;
		cout << "��                �ܡܡ�                                                 �ܡܡܡܡܡܡ�         ��" << endl;
		cout << "��                  ��                                                     �ܡܡܡܡܡܡ�       ��" << endl;
		cout << "��                �ܡܡܡܡ�                                                 �ܡܡܡܡܡ�       ��" << endl;
		cout << "��               �� ��                                                �ܡܡܡܡܡܡܡܡܡܡܡ�  ��" << endl;
		cout << "��              �� �� ��                                         �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡ� ��" << endl;
		cout << "��                ��   ��                                       �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�" << endl;
		cout << "��               ��     ��                                 �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ� ��" << endl;
		cout << "��                                                          �ܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡܡ�" << endl;
		cout << "��������������������������������������������������" << endl;
		cout << "���� ���� hp:" << main->characterhp() << endl;
		cout << "���� ������ hp:" << monsterhp << endl;
		cout << "�Է�:";
		cin >> select;
		while (cin.fail() == true || (select != 1 && select != 2)) {
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�." << endl;
			cin >> select;
		}
		if (select == 1) {
			monsterattack = damage-randomdefence; //���Ϳ��� �� ������=ĳ�� ������ - ������ ���� ����
			if (monsterattack < 0)
				monsterattack = 0;
			characterattack = randomattack - defence; //ĳ���Ϳ��� �� ������=������ ���� ���ݷ� - ĳ�� ����
			if (characterattack < 0)
				characterattack = 0;
			
			monsterhp -= monsterattack;
			main->hpdown(characterattack);
		}
		else if (select == 2) {
			exit = 1;
		}
	}
	if (exit == 1) {
		return 0;
	}
	else if (main->characterhp() < 0) {
		return 1;
	}
	else if (monsterhp < 0) {
		return 2;
	}
}