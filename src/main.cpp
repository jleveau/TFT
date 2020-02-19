#include <iostream>
#include "Tiles/TileMap.h"
#include "Character/Character.h"
#include "Action/MoveAction.h"


using namespace std;

int main() {
    TileMap* map = new TileMap(2, 2);
    Character* anna = new Character("Anna", 100, 10);

    map->addGameObject(0, 0, anna);

    cout << map->toString() << endl;


    return 0;
}
