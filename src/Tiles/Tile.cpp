//
// Created by jleveau on 18/02/2020.
//

#include "Tile.h"

Tile::Tile(int x, int y) : x(x), y(y) {
    this->gameobjects = new std::set<GameObject*>();
}

std::string Tile::toString() {
    std::string s (std::to_string(this->x) + " " + std::to_string(this->y));

    for(std::set<GameObject*>::iterator it = gameobjects->begin(); it != gameobjects->end(); ++it) {
        s += " " + (*it)->name;
    }
    return s;
}

void Tile::addGameObject(GameObject *gameObject) {
    this->gameobjects->insert(gameObject);
}


std::set<GameObject *> *Tile::getGameobjects() const {
    return gameobjects;
}

