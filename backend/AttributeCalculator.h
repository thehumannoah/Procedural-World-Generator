#pragma once
#include "Tile.h"
#include "World.h"

class AttributeCalculator {
    public:
        float calculateTemperature(float elevation, float latitude) const;
        Biome determineBiome(float elevation, float temperature) const;
        void calculateAttributes(World& world) const;
};