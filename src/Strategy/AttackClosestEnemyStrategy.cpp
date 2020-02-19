//
// Created by jleveau on 19/02/2020.
//

#include <climits>
#include "AttackClosestEnemyStrategy.h"
#include "../Character/Character.h"
#include "../Action/WaitAction.h"
#include "../Action/AttackAction.h"
#include "../Action/MoveAction.h"

Action *AttackClosestEnemyStrategy::nextAction(Character *character) {
    Tile *characterTile = this->tilemap->getTileForGameObject(character);

    GameObject *closest = nullptr;
    Tile* targetTile = nullptr;
    int minDistance = INT_MAX;

    for (auto gameobject: *this->tilemap->gameobjects) {
        if (gameobject != character) {
            Tile *targetTile = this->tilemap->getTileForGameObject(gameobject);
            int distance = this->tilemap->distance(characterTile, targetTile);
            if (distance < minDistance) {
                minDistance = distance;
                closest = gameobject;
                targetTile = targetTile;
            }
        }
    }
    if (closest == nullptr) {
        return new WaitAction(characterTile, this->tilemap);
    } else if (minDistance == 1) {
        return new AttackAction(targetTile, this->tilemap, character);
    } else {
        return new MoveAction(targetTile, this->tilemap, character);
    }
}

