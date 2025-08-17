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

	CharacterPlayer = new Character[3];
	if (!CharacterPlayer)
	{
		cout << "This game is not set Player Character";
	}

	for (int i = 0; i < 3; i++)
	{
		(CharacterPlayer + i)->setHp(100*(i+1));
		cout << "Player Character AttackPower is " << (CharacterPlayer + i)->getAttackPower()<< endl;
	}

	delete[] CharacterPlayer;
	return 0;
}