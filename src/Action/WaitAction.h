//
// Created by jleveau on 19/02/2020.
//

#ifndef TFT_WAITACTION_H
#define TFT_WAITACTION_H


#include "Action.h"

class WaitAction: public Action {
public:
    WaitAction(Tile *target, TileMap *tileMap);

    void perform() override;
};


#endif //TFT_WAITACTION_H
