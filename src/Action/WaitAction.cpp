//
// Created by jleveau on 19/02/2020.
//

#include "WaitAction.h"

void WaitAction::perform() {
}

WaitAction::WaitAction(Tile *target, TileMap *tileMap) : Action(target, tileMap) {}
