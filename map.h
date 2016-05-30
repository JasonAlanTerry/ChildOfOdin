#pragma once
#include "libtcod.hpp"
#include "map.h"

struct Tile {
    bool canWalk; // Can we walk on this tile?
    Tile() : canWalk(false) {}
};

class Map
{
public:

    int width, height;

    Map(int width, int height);
    ~Map();

    bool isWall(int x, int y) const;
    void render() const;

protected:
    Tile *tiles;
    
    friend class MapGen;

    void dig(int x1, int y1, int x2, int y2);
    void makeRoom(bool first, int x1, int y1, int x2, int y2);
};

