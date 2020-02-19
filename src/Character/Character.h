//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_CHARACTER_H
#define TFT_CHARACTER_H

#include <string>
#include "../Tiles/Tile.h"

class Character: public GameObject  {

    private:
        int healthMax;
        int currentHealth;
        int damage;

    public:
        Character(const std::string &name, int healthMax, int damage);
        std::string toString();

        void receiveAttack(Character* character) override;
};


#endif //TFT_CHARACTER_H
