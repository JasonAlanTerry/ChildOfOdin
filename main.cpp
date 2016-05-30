
// Inlude the libtcod library
#include "libtcod.hpp"

// Include our acotr, map, and engine classes for use within the gameloop.
#include "actor.h"
#include "map.h"
#include "engine.h"

// Create a engine
Engine engine;

int main() {

    // Using the created engine init a TCODConsol
    while (!TCODConsole::isWindowClosed()) {
        engine.update();
        engine.render();
        TCODConsole::flush();
    }
    
    return 0;
}
