//
// Created by jleveau on 18/02/2020.
//

#include "Character.h"

Character::Character(const std::string &name, int healthMax) : healthMax(healthMax) {
    this->name = name;
    this->currentHealth = this->healthMax;
}


std::string Character::toString() {
    std::string s (this->name + "hp: " + std::to_string(this->currentHealth) + '/' + std::to_string(this->healthMax));
    return s;
}


