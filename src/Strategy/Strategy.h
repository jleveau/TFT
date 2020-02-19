//
// Created by jleveau on 19/02/2020.
//

#ifndef TFT_STRATEGY_H
#define TFT_STRATEGY_H


#include "../Tiles/TileMap.h"
#include "../Action/Action.h"

class Strategy {

public :
    TileMap* tilemap;

    virtual Action* nextAction(Character* character) = 0;
};


#endif //TFT_STRATEGY_H
