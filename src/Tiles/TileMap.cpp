//
// Created by jleveau on 18/02/2020.
//

#include "TileMap.h"
#include <iostream>

TileMap::TileMap(int width, int height) : width(width), height(height) {
    this->gameobjects = new std::set<GameObject*>();
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
            tile->gameobjects->erase(gameObject);
        }
    }
}

void TileMap::addGameObject(int x, int y, GameObject* gameObject) {
    if (x >= this -> width || y > this->height || x < 0 || y < 0) {
        throw "Invalid tile coordinates " + std::to_string(x) + "," + std::to_string(y);
    } else {
        this->gameobjects->insert(gameObject);

        Tile* tile = this->tiles[x][y];
        tile->addGameObject(gameObject);
    }
}


Tile* TileMap::getTileForGameObject(GameObject* gameObject) {
    for (int i = 0; i < this->width; i++) {
        for (int j = 0; j < this->height; j++) {
            Tile* tile = this->tiles[i][j];
            if (tile->containsGameObject(gameObject)) {
                return tile;
            }
        }
    }
    return nullptr;
}

int TileMap::distance(Tile* tile1, Tile* tile2) {
    return abs((tile1->x - tile2->x) + (tile1->y - tile2->y));
}

