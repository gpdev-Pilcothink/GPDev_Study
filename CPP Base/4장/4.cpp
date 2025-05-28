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
	Character* CharacterPlayer;

	CharacterPlayer = new Character;
	if (!CharacterPlayer)
	{
		cout << "This game is not set Player Character";
	}

	CharacterPlayer->setHp(100);
	cout << "Player Character AttackPower is " << CharacterPlayer->getAttackPower();

	delete CharacterPlayer;
	return 0;
}