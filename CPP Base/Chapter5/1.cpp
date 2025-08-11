#include <iostream>
using namespace std;

class CharacterBase {
private:
    int HP;

public:
    CharacterBase() { HP = 100; }
    CharacterBase(int HP) { this->HP = HP; }
    void SetHP(int HP) { this->HP = HP; }
    int GetHP() { return HP; } 
    CharacterBase GetCharacterBase() { return *this; } //자신의 복사본을 반환함.
};

int main()
{
    CharacterBase PlayerCharacter;
    cout << "Player HP : "<< PlayerCharacter.GetHP() << endl;

    CharacterBase PlayerCharacter2 = PlayerCharacter.GetCharacterBase();
    cout << "Player2 Hp : " << PlayerCharacter2.GetHP() << endl;
}