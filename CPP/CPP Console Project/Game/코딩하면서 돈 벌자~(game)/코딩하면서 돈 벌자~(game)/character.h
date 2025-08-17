#include <cstring>
#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class character {
	string name; //�̸�����
	int money; //0������ ����
	int stress; //0~100
	int hungry; //0~100;
	int tired; //0~100;
	long int ability;
private:
	
protected:

public:
	character(); //������
	void make();
	int RETURN_money();
	int RETURN_stress();
	int RETURN_hungry();
	int RETURN_tired();
	int RETURN_ability();
	string RETURN_name();
	void EARN_money();
	void EARN_hungrymoney();
	void DOWN_money(int money);
	void DOWN_hungry();
	void DOWN_tired();
	void UP_hungry();
	void UP_tired();
	void UP_ability();
	void DEFAULT_tired();
	~character(); //�Ҹ���
};

#endif



