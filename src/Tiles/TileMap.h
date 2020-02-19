//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_TILEMAP_H
#define TFT_TILEMAP_H


#include "Tile.h"
#include <string>

class TileMap {


public:
    int width;
    int height;
    Tile*** tiles;

    std::set<GameObject*>* gameobjects;

    TileMap(int width, int height);

    void removeGameObject(GameObject* gameObject);
    void addGameObject(int x, int y, GameObject* gameObject);


    std::string toString();

    Tile *getTileForGameObject(GameObject *gameObject);
    int distance(Tile* tile1, Tile* tile2);
};


#endif //TFT_TILEMAP_H
