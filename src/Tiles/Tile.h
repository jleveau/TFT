//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_TILE_H
#define TFT_TILE_H

#include <string>
#include "../Character/GameObject.h"
#include <set>

class Tile {

    private:
        int x;
        int y;
        std::set<GameObject*>* gameobjects;

    public:
        Tile(int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    std::set<GameObject *> *getGameobjects() const;

    void setGameobjects(std::set<GameObject *> *gameobjects);

    std::string toString();
        void addGameObject(GameObject* gameObject);
};


#endif //TFT_TILE_H
