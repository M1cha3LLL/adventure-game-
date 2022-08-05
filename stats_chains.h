# pragma once
// base for items player eneimes

namespace N

    class chains
    {
    private:
        char[20] name;
        int hp;
        int armor;
        int dmg;

        int level;



    public:
        virtual void constructor(int Hp, int Def ,  int Atk , int Level);

        void setArmor(int input_value);
        void setHp(int input_value);
        void setDmg(int input_value);
        int getArmor();
        int getHp();
        int getDmg();
    };


