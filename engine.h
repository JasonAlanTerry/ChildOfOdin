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



class Engine
{
public:
    // A TCODList containing a group of pointers to Actor objects, this list is named actors
    // I assume I would do this to not have to clone the actors when working with them or comparing them throughout the game.
    // Using this list, I can derefrence the actor I need and work with it indirectly rather than make a copy of it, work with it, then pass it back?
    // I am around 20% certain that is how this works.
    TCODList<std::unique_ptr<Actor>> actors;
    
    // We also create a single pointer to a actor object named player.
    Actor *player;

    // Also, a pointer to a map object named map.
    Map *map;

    Engine();
    ~Engine();

    // two member functions to handle updateing and rendering the console.
    void update();
    void render();
};


// 
extern Engine engine;
