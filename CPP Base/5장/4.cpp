#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


using namespace std;

class CharacterBase {

private: //Character ID
    char* Name;

private: //Character Base Status
    int HP;

public://생성자
    CharacterBase();
    CharacterBase(const char* Name);

public://소멸자
    ~CharacterBase();


public: //Getter Setter
    void SetHp(int HP) { this->HP = HP; }
    void SetName(const char* Name);
    char* GetName() { return Name; }

public:
};


CharacterBase::CharacterBase()
{
    HP = 100;
}

CharacterBase::CharacterBase(const char* Name)
{
    HP = 100;
    this->Name = new char[strlen(Name) + 1];
    strcpy(this->Name, Name);
}

CharacterBase :: ~CharacterBase()
{
    if (Name)
        delete[] Name;
}

void CharacterBase::SetName(const char* Name)
{
    if (this->Name != nullptr) //이름이 만약 이미 할당되어있따면
    {
        delete[] this->Name;
    }
    if (strlen(Name) == 0) //받은 이름이 없다면
    {
        cout << "Error Name is Empty" << endl;
        return ;
    }
   
    this->Name = new char[strlen(Name) + 1];
    strcpy(this->Name, Name);
    cout << "Name Change suscessfully" << endl;

}


int main()
{
    CharacterBase Player("Moon");
    CharacterBase Player2(Player);

    char* PlayerName = Player.GetName();
    char* PlayerName2 = Player2.GetName();

    cout << "Player1 Name is " << PlayerName << endl;
    cout << "Player2 Name is " << PlayerName2 << endl;

    Player2.SetName("Moongp");
    
    PlayerName = Player.GetName();
    PlayerName2 = Player2.GetName();

    cout << "Player1 Name is " << PlayerName << endl;
    cout << "Player2 Name is " << PlayerName2 << endl;

    return 0;
}