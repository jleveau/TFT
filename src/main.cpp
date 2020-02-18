#include <iostream>
#include "Tiles/TileMap.h"
#include "Character/Character.h"
#include "Action/MoveAction.h"

using namespace std;

int main() {
    TileMap* map = new TileMap(2, 2);
    Character* anna = new Character("Anna", 100);
    map->tiles[0][0]->addGameObject(anna);
    cout << map->toString() << endl;

    MoveAction* moveAction = new MoveAction(map->tiles[0][1], map, anna );
    moveAction->perform();

    cout << map->toString() << endl;


    return 0;
}
