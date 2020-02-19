//
// Created by jleveau on 19/02/2020.
//

#ifndef TFT_ATTACKACTION_H
#define TFT_ATTACKACTION_H


#include "Action.h"
#include "../Character/Character.h"

class AttackAction: public Action {

public:
    Character* characterAttacker;

    AttackAction(Tile *target, TileMap *tileMap, Character *characterAttacker);

    void perform() override;
};


#endif //TFT_ATTACKACTION_H
