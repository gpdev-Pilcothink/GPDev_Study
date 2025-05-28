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
	Character Enemy[3][4]; //°´Ã¼ ¹è¿­

	Character* CharacterHp;

	//Set Enemy Hp
	for (int i = 0; i < 3; i++)
	{
		
		for (int j = 0; j < 4; j++)
		{
			CharacterHp = &Enemy[i][j];
			CharacterHp->setHp(100 * (i+1) + j * 10);
		}

	}
	

	//Show Enemy Hp
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			CharacterHp = &Enemy[i][j];
			cout << i << "layer " << j << "Enemy's AttackPower is " << CharacterHp->getAttackPower() << endl; //300, 330, 360
		}
	}

	return 0;
}