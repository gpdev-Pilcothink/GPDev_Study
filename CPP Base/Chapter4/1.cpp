#include <iostream>

using namespace std;

class Character {
	int Hp;
public:
	Character() { Hp = 100; }
	Character(int r) { Hp = r; }
	double getAttackPower();
};

double Character::getAttackPower() {
	return 3*Hp;
}


int main() {
	Character CharacterPlayer;
	Character Enemy(30);

	cout << CharacterPlayer.getAttackPower() << endl;

	Character * p;
	p = &CharacterPlayer;
	cout << p->getAttackPower() << endl;
	cout << (*p).getAttackPower() << endl;

	p = &Enemy;
	cout << p->getAttackPower() << endl;
	cout << (*p).getAttackPower() << endl;

	return 0;
}