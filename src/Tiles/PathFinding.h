//
// Created by jleveau on 19/02/2020.
//

#ifndef TFT_PATHFINDING_H
#define TFT_PATHFINDING_H


#include "Tile.h"
#include "TileMap.h"

class PathFinding {

    Tile *getNextTileOnPath(TileMap* tileMap, Tile *start, Tile *target);
}

#endif //TFT_PATHFINDING_H
