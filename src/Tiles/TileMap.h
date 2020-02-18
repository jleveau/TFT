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

    TileMap(int width, int height);
    void removeGameObject(GameObject* gameObject);

    std::string toString();
};


#endif //TFT_TILEMAP_H
