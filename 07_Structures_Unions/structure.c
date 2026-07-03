#include<stdio.h>
    int main(){
        struct pokemon{
            int hp;
            int speed;
            int attack;
            char tier;
        };

        struct pokemon pikachu;
        pikachu.hp = 50;
        pikachu.speed = 100;
        pikachu.attack = 60;
        pikachu.tier = 'A';

        struct pokemon charizard;
        charizard.hp = 80;
        charizard.speed = 80;
        charizard.attack = 130;
        charizard.tier = 'S';

        struct pokemon mewtwo;
        mewtwo.hp = 150;
        mewtwo.speed = 200;
        mewtwo.attack = 170;
        mewtwo.tier = 'G';

        printf(" your out %d",charizard.hp);
    

        return 0;
    }
