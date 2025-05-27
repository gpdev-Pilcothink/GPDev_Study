#include <cstring>
#include <string>
using namespace std;

#ifndef CHARACTER_H
#define CHARACTER_H

class character {
	string name; //이름짓기
	int money; //0원부터 시작
	int stress; //0~100
	int hungry; //0~100;
	int tired; //0~100;
	long int ability;
private:
	
protected:

public:
	character(); //생성자
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
	~character(); //소멸자
};

#endif



