//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_ACTION_H
#define TFT_ACTION_H


#include "../Tiles/Tile.h"
#include "../Tiles/TileMap.h"

class Action {

public:
    Tile* target;
    TileMap* tileMap;



    virtual void perform() = 0;

    Action(Tile *target, TileMap *tileMap);
};


#endif //TFT_ACTION_H
