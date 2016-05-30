#pragma once

#include "libtcod.h"
#include "map.h"
#include "actor.h"
#include "engine.h"

const unsigned int ROOM_MAX_SIZE = 10;
const unsigned int ROOM_MIN_SIZE = 4;

class MapGen : public ITCODBspCallback, protected Map {
private:
    Map &map; // a map to dig.
    int roomNum; // room number
    int lastx, lasty; // ceneter of last room


public:
    MapGen(Map &map) : map(map), roomNum(0) {};

    bool visitNode(TCODBsp *node, void *userData);


};
