#include "stats_chains.h" // header in local directory
#include <iostream> // header in standard library

using namespace N;
using namespace std;

void chains::constructor(int Hp , int Def, int Atk, int Level )
{
 hp = Hp ;
 def = Def;
 atk = Atk;

 level = Level;

}
int chains::getDef(){

return def;
}
int chains::getHp(){

return hp;
}
int chains::getAtk(){

return atk;
}
int chains::setDef(int input_value){

return def = input_value;
}
int chains::setHp(int input_value){

return hp = input_value;
}
int chains::setAtk(int input_value){

return def = input_value;
}

