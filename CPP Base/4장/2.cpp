#include <iostream>

using namespace std;

class Character {
	int Hp;

public:

	Character() { Hp = 100; }
	Character(int r) { Hp = r; }


public :
	void setHp(int r);
	double getAttackPower();
};

inline void Character::setHp(int r) {
	Hp = r;
}

double Character::getAttackPower() {
	return 3*Hp; 
}


int main() {
	Character CharacterPlayer;
	Character Enemy[3];

	for (int i = 0; i < 3; i++)
	{
		Enemy[i].setHp(100 + (i * 10)); // 100, 110, 120
	}
	

	Character* CharacterHp;
	for (int i = 0; i < 3; i++)
	{
		CharacterHp = &Enemy[i];
		cout << i << "Enemy's AttackPower is " << CharacterHp->getAttackPower() << endl; //300, 330, 360
	}

	return 0;
}