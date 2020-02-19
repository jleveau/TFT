//
// Created by jleveau on 18/02/2020.
//

#include "Tile.h"

Tile::Tile(int x, int y) {
    this->x = x;
    this->y = y;
    this->gameobjects = new std::set<GameObject*>();
}

std::string Tile::toString() {
    std::string s;
    for(auto gameobject : *gameobjects) {
        s += " " + gameobject->name;
    }
    return s;
}

void Tile::addGameObject(GameObject *gameObject) {
    this->gameobjects->insert(gameObject);
}

bool Tile::containsGameObject(GameObject *gameObject) {
    return this->gameobjects->find(gameObject) != this->gameobjects->end();
}

bool Tile::isTraversable() {
    for(auto gameobject : *gameobjects) {
        if (!gameobject->isTraversable()) {
            return  false;
        }
    }
    return true;
}


