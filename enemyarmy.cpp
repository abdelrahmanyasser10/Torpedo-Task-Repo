#include "enemyarmy.h"

bool attackk = false;
bool defendd = false;
void enemyarmy::attack()
{
    cout << "the enemy is attacking us";
    attackk = true;
}
void enemyarmy::defend()
{
    cout << "the enemy is defending for themselves";
    defendd = true;
}
bool enemyarmy::isAttack()
{
    return attackk;
}
bool enemyarmy::isDefend()
{
    return defendd;
}