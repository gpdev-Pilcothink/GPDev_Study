#include <iostream>
#include "character.h"
#include "gamemain.h"
#include "function.h"
using namespace std;



int main() {
	function f;
	//��ũ��(40*22)
	int select = 0;
	cout << "�����������������������������������������" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                 ����               �ܡ�  ���                            ��" << endl;
	cout << "��               ��    ��             ��    �ܡ��                            ��" << endl;
	cout << "��             ��      ��               �ܡ�  ���                            ��" << endl;
	cout << "��           ��        ��                ��   ���                            ��" << endl;
	cout << "��           �������    �ܡܡܡܡܡܡ�   ���                            ��" << endl;
	cout << "��         �����������          ��   ���                            ��" << endl;
	cout << "��                           ��    �ܡܡܡ�   ���                            ��" << endl;
	cout << "��                           ��    ��  �� �����                            ��" << endl;
	cout << "��                           ��    ��  �� ���                                ��" << endl;
	cout << "��                           ��    ��  �� ���                                ��" << endl;
	cout << "��                           ��    ��  �� ���                                ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��    �ڵ� �ϸ鼭 ������~                                                     ��" << endl;
	cout << "��    ����(1), ����(2)                                                        ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "��                                                                            ��" << endl;
	cout << "�����������������������������������������" << endl;
	f.gotoxy(8, 17);
	cout << "�Է�:";
	cin >> select;
	while (cin.fail() == true || (select != 1 && select != 2)) {
		cin.clear();
		cin.ignore(1000, '\n');
		f.gotoxy(8, 18);
		cout << "�߸� �Է��Ͽ����ϴ�. �ٽ� �Է� �Ͻʽÿ�.";
		f.gotoxy(13, 17);
		cout << "                  ";
		f.gotoxy(13, 17);
		cin >> select;
	}
	if (select == 1) {
		character cha; //ĳ���� ��ü ����
		cha.make();   //ĳ���� �����
		gamemain gotomain; ///����ȭ������ �̵�
		gotomain.run(&cha);  //����ȭ������ ���鼭 cha�� �ּҸ� �Ѱܹ���
	}
	f.gotoxy(0, 28);
	return 0;
}