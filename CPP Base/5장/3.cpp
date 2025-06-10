#include <iostream>
using namespace std;

class CharacterBase {
private:
    int HP;

public:
    CharacterBase() { HP = 100; }
    CharacterBase(int HP) { this->HP = HP; }


public: //Getter Setter
    void SetHP(int HP) { this->HP = HP; }
    int GetHP() { return HP; } 
    CharacterBase GetCharacterBase() { return *this; } //자신의 복사본을 반환함.

public:
    void UpgradeHP() { HP += 100; }
    int& ModifyHP() { return HP; }
};

int main()
{
    CharacterBase PlayerCharacter;
    cout << "Base Player HP : "<< PlayerCharacter.GetHP() << endl;

    CharacterBase PlayerCharacter2 = PlayerCharacter.GetCharacterBase();
    cout << "Base Player2 Hp : " << PlayerCharacter2.GetHP() << "\n\n";


    //참조 변수 PlayerCharacter2의 별칭은 Enemy로 지정
    CharacterBase& Enemy = PlayerCharacter2;
    Enemy.UpgradeHP();
    cout << "Enemy Player2 Hp : " << PlayerCharacter2.GetHP() << endl;
    cout << "EnemyBase Hp : " << PlayerCharacter2.GetHP() << "\n\n";


    //참조 변수 포인터 

    CharacterBase* Enemy2 = &Enemy;
    Enemy2->UpgradeHP();
    cout << "Enemy Player2 Hp : " << PlayerCharacter2.GetHP() << endl;
    cout << "Upgrade EnemyBase Hp : " << PlayerCharacter2.GetHP() << "\n\n";


    //참조 리턴 이용하기.
    Enemy2->ModifyHP() = 400;
    cout << "Enemy Player2 Hp : " << PlayerCharacter2.GetHP() << endl;
    cout << "Upgrade EnemyBase Hp : " << PlayerCharacter2.GetHP() << endl;


    return 0;
}