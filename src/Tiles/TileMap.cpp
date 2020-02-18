//
// Created by jleveau on 18/02/2020.
//

#include "TileMap.h"
#include <iostream>

TileMap::TileMap(int width, int height) : width(width), height(height) {
    this->tiles = new Tile**();
    for (int i = 0; i < this->width; i++) {
        this->tiles[i] = new Tile*[this->height];
        for (int j = 0; j < this->height; j++) {
            this->tiles[i][j] = new Tile(i, j);
        }
    }
}

std::string TileMap::toString() {
    std::string s;
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            Tile* tile = this->tiles[i][j];
            s += tile->toString() + '\n';
        }
    }
    return s;
}

void TileMap::removeGameObject(GameObject *gameObject) {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            Tile* tile = this->tiles[i][j];
            tile->getGameobjects()->erase(gameObject);
        }
    }
}
