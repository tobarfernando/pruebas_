#include <iostream>

using namespace std;

void PrintCuteMessage()
{
    cout << "Eres increible!" << endl;
}

void Print(string message)
{
    cout << message << endl;
}

bool IsPlayerDead(int hp)
{
    if(hp <= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool PrintBool(bool value)
{
    if(value == true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int GetAttackPower(int Damage, int Weapon)
{
    return Damage + Weapon;
}

int main()
{
    PrintCuteMessage();

    int hp = 10;
    int power = 5;
    int weapon  = 11;

    Print("Is Player dead????");

    bool isDead = IsPlayerDead( hp - GetAttackPower(power,weapon) );

    PrintBool(isDead);

    return 0;
}