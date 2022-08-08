# pragma once
#include "stats_chains.h"
<cstring>
<array>
<iostream>
<cstdlib>
<ctime>
namespace std
namespace N



class items : stats_chains {

private:
char[20] name;

        int tier;
        int dmg;
        bool equiped;
        int level;

public:
    void constructor(int HpIncrease, int Armor ,  int Damage , char TypeName, char Name , int Tier );

    void setTeir(int input);
    int getTier();


    void setEquiped();

    bool getEquiped();



} ;

void itemGenerator(char type ,  int level , int tier);
