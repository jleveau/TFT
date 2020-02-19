//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_TILE_H
#define TFT_TILE_H

#include <string>
#include "../Character/GameObject.h"
#include <set>

class Tile {

    public:
        int x;
        int y;

        Tile(int x, int y);
        std::set<GameObject*>* gameobjects;
        std::string toString();
        void addGameObject(GameObject* gameObject);
        bool containsGameObject(GameObject* gameObject);
};


#endif //TFT_TILE_H
