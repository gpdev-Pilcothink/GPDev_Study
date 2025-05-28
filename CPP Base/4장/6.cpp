#include <iostream>

using namespace std;

class Character {
	int Hp;

public:

	Character() { Hp = 100; }
	Character(int Hp) { this->Hp = Hp; }


public :
	void SetHp(int r);
	double getAttackPower();
};

inline void Character::SetHp(int r) {
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
		(CharacterPlayer + i)->SetHp(100*(i+1));
		cout << "Player Character AttackPower is " << (CharacterPlayer + i)->getAttackPower()<< endl;
	}

	delete[] CharacterPlayer;
	return 0;
}