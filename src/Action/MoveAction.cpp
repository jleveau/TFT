//
// Created by jleveau on 18/02/2020.
//

#include "MoveAction.h"

void MoveAction::perform() {
    this->tileMap->removeGameObject(this->gameObject);
    this->target->addGameObject(this->gameObject);

}

MoveAction::MoveAction(Tile *target, TileMap *tileMap, GameObject *gameObject) : Action(target, tileMap),
                                                                                 gameObject(gameObject) {}




