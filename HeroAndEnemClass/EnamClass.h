#pragma once
#include "HeroClass.h"

class Enemy {
public:
    Enemy(char* pName, int hp);
    ~Enemy();

    void operator*(const int i);

public:
    int getDiffence() { return _diffence; }
    int getHp() { return _hp; }
    void setHp(int hp) { _hp = hp; }
    void show();

public:
    void attack(Hero* hero);
    void heal();

private:
    char* _pName;
    int _nameSize;

private:
    int _hp = 0;
    int _attack = 75;
    int _diffence = 20;
};
