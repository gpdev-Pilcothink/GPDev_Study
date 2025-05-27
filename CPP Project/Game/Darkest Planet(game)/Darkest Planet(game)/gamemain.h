#include <string>
#include <cstdlib>
using namespace std;


#ifndef GAMEMAIN_H
#define GAMEMAIN_H

class gamemain {
private:
	//캐릭터 총 설정
	string name;  //캐릭터 이름의 약자
	int work;    //캐릭터 직업의 약자
	int money;  //돈
	int hp;
	int damage; // 데미지
	int defence; //방어력
	int courage; //용기 (100이 기본상태) 1이 감소할때마다 피해 1% 감소
	int protective; //0.기본 방어구 1.경량화 방어구 2.경량 합금 방어구 3. 초경량 합금 방어구 4. 초경량 초합금 방어구
	int weapon; //0. 기본 무기, 1. 경량화 무기. 2. 경량 합금 무기 3.초경량 합금 방어구 4. 초경량 초합금 방어구
	int black; //검은 기운 강화 횟수
	int blackrock; //검은 돌 개수
	int stage; //0. 아무런 보스도 못잡음, 1, 첫번째 보스 잡음 , 2.두 번째 보스 잡음, 3. 최종보스 잡음(엔딩)
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