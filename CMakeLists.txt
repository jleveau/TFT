cmake_minimum_required(VERSION 3.15)
project(TFT)

set(CMAKE_CXX_STANDARD 14)

add_executable(TFT src/main.cpp src/Tiles/TileMap.cpp src/Tiles/TileMap.h src/Tiles/Tile.cpp src/Tiles/Tile.h src/Character/Character.cpp src/Character/Character.h src/Character/GameObject.h src/Action/Action.cpp src/Action/Action.h src/Action/MoveAction.cpp src/Action/MoveAction.h src/Action/AttackAction.cpp src/Action/AttackAction.h src/Strategy/Strategy.h src/Strategy/AttackClosestEnemyStrategy.cpp src/Strategy/AttackClosestEnemyStrategy.h src/Action/WaitAction.cpp src/Action/WaitAction.h src/Tiles/PathFinding.cpp src/Tiles/PathFinding.h)