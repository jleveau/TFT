//
// Created by jleveau on 19/02/2020.
//

#include "AttackAction.h"

void AttackAction::perform() {
    std::set<GameObject*>* targetObjects = this->target->gameobjects;

    for (auto targetObject : *targetObjects) {
        targetObject->receiveAttack(this->characterAttacker);
    }
}

AttackAction::AttackAction(Tile *target, TileMap *tileMap, Character *characterAttacker) : Action(target, tileMap),
                                                                                           characterAttacker(
                                                                                                   characterAttacker) {}


