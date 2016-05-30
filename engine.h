#pragma once
/*
*   engine.h -- Created By: Jason A Terry
*   This Engine class aims to handle our event handling and the following.
*   All of the below is subject to change, and general lack of understanding.
*   - Recive and Handle input events
*   - Modify data and objects according to recived input
*   - Update the ROOT console with all changes made to the last event
*   - Render the new ROOT console.
*/

#include "libtcod.hpp"
#include "actor.h"
#include "map.h"

class Engine {
public:
    TCODList<Actor *> actors;
    Actor *player;
    Map *map;

    Engine();
    ~Engine();

    // two member functions to handle updateing and rendering the console.
    void update();
    void render();
};

// 
extern Engine engine;
