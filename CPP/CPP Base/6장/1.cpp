#include <iostream>
using namespace std;

int AttackDamage(int Damage){
    return Damage;
}



int AttackDamage(int Damage, int Count){
    return Damage * Count;
}



int main(){
    cout << "abc";
    cout << AttackDamage(5);
    cout << AttackDamage(5, 3);
    return 0;
}