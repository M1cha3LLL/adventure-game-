#pragma once
#include "items.h"
#include <iostream>
#include <cstring>
#include <array>
#include <ctime>
#include <cstdlib>
/*
char[10] typeName;
int hpIncrease;
bool used;
char[20] name;
        int hp;
        int armor;
        int dmg;

        int level;

*/


using namespace std;


 void item :: itemConstructor(int HpIncrease, int Armor ,  int Damage , char ItemName, char TypeName ){

    typeName = TypeName;
    hpIncrease = HpIncrease ;

    name = ItemName;

    armor = Armor ;
    dmg = Damage ;
    level = level ;


 }



 char nameSelector(int Tier ,char inputArray[])
{
char[] name;
srand(time(0))
int randomNumber =  rand() % sizeof(inputArray)) + 1;
for(int i = 0 , i == sizeof(inputArray,i++)){
if (randomNumber == i){
    return name = inputArray[i];
}
return name;
}


};
 void itemGenerator(char type ,  int level , int tier){
 int Armor;
 int ItemName;
 int HpIncrease;

 char[20] nameCombo;
char[10][10] tierOne ={{" ","a","s","s"," "}{ " ","j","a","vascript bad "}{}{}

char[] name;
srand(time(0))
int randomNumber =  rand() % sizeof(inputArray)) + 1;
for(int i = 0 , i == sizeof(inputArray,i++)){
if (randomNumber == i){
    return name = inputArray[i];
}
return name;
}
 //rarity
if(tier == 1){

}
else if(tier == 2){

}
else if(tier == 3)


 }
/*

void function makers(){
//construcor_info
char[] item_name;
char[]  type_item;
int dmg;
int hpincrease;
int armor;
int level

function_int randonumber_chooser(int ){}



 * THIS should be done several times to create a random item i might be more seperate with potions , weapons and armor  *
array_of_strings item_namer["name","name","name","name","name","name"]
int number = number_gen( 0 to item_namer.amount_in_index_num);
switch number:
case number:
item_name = item_namer.index
break;
case number:
item_name = item_namer.index
break;
case number:
display item_namer.index;
break;case number_cod:
 item_name = item_namer.index  ;
break;so onso fourth





int rarity = random_number-gen(0-3);
switch rarity :
case rarity == 1:
item_name.append(" common");
break;
case rarity == 2:
item_name.append(" uncommon");
break;
case rarity == 3:
item_name.append(" rare");
break;


constructor itemgenerator(random numbers inside the constructor , selected and name type  );
}



*/
