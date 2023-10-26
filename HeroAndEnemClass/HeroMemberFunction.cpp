
#include <iostream>
#include <cstdlib>
#include <cstring>
#include "EnamClass.h"
#include "HeroClass.h"
using namespace std;


Hero::Hero(char* pName, int hp) {

    // 名前をコピー
    _nameSize = strlen(pName);
    _pName = new char[_nameSize + 1];   // +1は\0分
    strcpy(_pName, pName);

    // 他のパラメータ初期化
    _hp = hp;
    _attack = 75;
    _diffence = 20;
}

// デストラクタ
Hero::~Hero() {
    if (_pName != NULL)
    {
        delete[] _pName;
        _pName = NULL;
    }
}

void Hero::show() {
    printf("名前：%s\n", _pName);
    printf("体力：%d\n", _hp);
    printf("攻撃力：%d, ", _attack);
    printf("防御力：%d\n", _diffence);
}




void Hero::attack(Enemy* enemy) {
    int deffence = enemy->getDiffence();
    int damage = 0;
    damage = _attack - deffence;
    printf("%sの攻撃！\n%dのダメージを与えた\n", _pName, damage);

    int hp = enemy->getHp();
    enemy->setHp(hp - damage);
    printf("相手の残りHP : %d\n", enemy->getHp());
}


void Hero::heal() {
    int healHp = 0;
    printf("どのくらい回復しますか\n> ");
    cin >> healHp;
    _hp += healHp;

    printf("%sの残りHP : %d\n", _pName, _hp);
}


