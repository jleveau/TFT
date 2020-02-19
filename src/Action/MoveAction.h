//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_MOVEACTION_H
#define TFT_MOVEACTION_H


#include "Action.h"

class MoveAction: public Action {

public:
    GameObject* gameObject;
    MoveAction(Tile *target, TileMap *tileMap, GameObject *gameObject);

    void perform() override;

};


#endif //TFT_MOVEACTION_H
