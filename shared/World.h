#pragma once
#include <vector>
#include <stdexcept>
#include "Tile.h"

class World {
    private:
        int size;
        std::vector<std::vector<Tile>> tiles;
    
    public:
        World() : size(0), tiles(size, std::vector<Tile>(size)) {};
        World(int size) {
            if (size <= 0) throw std::invalid_argument("Size less than 0");

            this->size = size;
            this->tiles = std::vector<std::vector<Tile>>(
                size,
                std::vector<Tile>(size));
        };

        Tile& getTile(int x, int y) {
            if (x >= size || y >= size || x < 0 || y < 0) throw std::out_of_range("Dimensions out of range");
            return tiles[x][y];
        }

        int getSize() const {return size;}
};