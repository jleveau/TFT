//
// Created by jleveau on 19/02/2020.
//

#ifndef TFT_ATTACKCLOSESTENEMYSTRATEGY_H
#define TFT_ATTACKCLOSESTENEMYSTRATEGY_H


#include "Strategy.h"

class AttackClosestEnemyStrategy: public Strategy {

public:
    Action* nextAction(Character *character) override;
};


#endif //TFT_ATTACKCLOSESTENEMYSTRATEGY_H
