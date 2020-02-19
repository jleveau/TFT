//
// Created by jleveau on 19/02/2020.
//

#include <vector>
#include "PathFinding.h"



Tile *PathFinding::getNextTileOnPath(TileMap* tileMap, Tile *start, Tile *target) {
    int** distances = new int*();
    auto* marked = new std::vector<int*>();

    for (int i = 0; i< tileMap->width; ++i) {
        distances[i] = new int();
        for (int j =0; j < tileMap->height; ++j) {
            distances[i][j] = INT8_MAX;
        }
    }
    distances[0][0] = 0;
    int p[2] = {0, 0};
    marked->push_back(p);

    delete distances;
    delete(marked);
}

int* minDistance(TileMap* tileMap, int** distances) {
    int minDistance = INT8_MAX;
    int minX = 0;
    int minY = 0;

    for (int i=0; i< tileMap->width; ++i) {
        for (int j =0; j< tileMap->height; ++j) {
            if (distances[i][j] < minDistance){
                minDistance = distances[i][j];
                minX = i;
                minY = j;
            }
        }
    }
}

bool isFinished(TileMap* tileMap, std::vector<int*>* marked) {
    return marked->size() >= tileMap->width * tileMap->height;
}