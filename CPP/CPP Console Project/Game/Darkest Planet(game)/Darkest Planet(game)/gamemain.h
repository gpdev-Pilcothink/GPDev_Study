#include <string>
#include <cstdlib>
using namespace std;


#ifndef GAMEMAIN_H
#define GAMEMAIN_H

class gamemain {
private:
	//ĳ���� �� ����
	string name;  //ĳ���� �̸��� ����
	int work;    //ĳ���� ������ ����
	int money;  //��
	int hp;
	int damage; // ������
	int defence; //����
	int courage; //��� (100�� �⺻����) 1�� �����Ҷ����� ���� 1% ����
	int protective; //0.�⺻ �� 1.�淮ȭ �� 2.�淮 �ձ� �� 3. �ʰ淮 �ձ� �� 4. �ʰ淮 ���ձ� ��
	int weapon; //0. �⺻ ����, 1. �淮ȭ ����. 2. �淮 �ձ� ���� 3.�ʰ淮 �ձ� �� 4. �ʰ淮 ���ձ� ��
	int black; //���� ��� ��ȭ Ƚ��
	int blackrock; //���� �� ����
	int stage; //0. �ƹ��� ������ ������, 1, ù��° ���� ���� , 2.�� ��° ���� ����, 3. �������� ����(����)
public:
	gamemain(string name, int work);
	void run(gamemain *main);
	void tradedown(int downmoney,int select);
	int shopmoney();
	int characterhp();
	int characterdefence();
	int characterattack();
	void huntmoney(int floor);
	void upblackrock();
	void hpdown(int attack);
};

#endif