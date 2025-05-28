#include <iostream>
#include <string>

using namespace std;

class CharacterBase {
private:
	string Name;
	int Hp;
	int stamina;

public:
	CharacterBase() {}
	CharacterBase(string Name) { this->Name = Name; }
};


int main() {
	CharacterBase* PlayerCharacter;
	string Name;

	cin >> Name;
	PlayerCharacter = new CharacterBase(Name);

	cout << "Welcome " << Name << " New Game World." << endl;
	


	return 0;
}