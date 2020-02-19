//
// Created by jleveau on 18/02/2020.
//

#ifndef TFT_GAMEOBJECT_H
#define TFT_GAMEOBJECT_H

class Character;

class GameObject {

    public:
        std::string name;
        virtual void receiveAttack(Character* characterAttacker)=0;
        virtual bool isTraversable() = 0;

};


#endif //TFT_GAMEOBJECT_H
