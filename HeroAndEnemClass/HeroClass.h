#pragma once
#include "EnamClass.h"
class Enemy;    //‘O•ûéŒ¾

const int MAX_NAME = 16;

class Hero {
public:
    Hero(char* pName, int hp);
    ~Hero();

public:
    int getDiffence() { return _diffence; }
    int getHp() { return _hp; }
    void setHp(int hp) { _hp = hp; }
    void show();

public:
    void attack(Enemy* enemy);
    void heal();

private:
    char* _pName;
    int _nameSize;

private:
    int _hp = 0;
    int _attack = 75;
    int _diffence = 20;
};


