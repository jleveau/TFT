//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_CHARACTER_H
#define TFT_CHARACTER_H

#include <string>
#include "../Tiles/Tile.h"
#include "GameObject.h"

class Character: public GameObject {

private:
    int healthMax;
    int currentHealth;

public:
    Character(const std::string &name, int healthMax);
    std::string toString();
};


#endif //TFT_CHARACTER_H
