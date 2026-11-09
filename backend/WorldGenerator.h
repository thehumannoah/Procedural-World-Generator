#pragma once
#include <string>
#include "World.h"
#include "NoiseGenerator.h"
#include "AttributeCalculator.h"

enum class Mode {
    Island,
    Archipelago,
    Continent
};

class WorldGenerator {
    private:
        int seed;
        Mode mode;
        World world;
        NoiseGenerator NG;
        AttributeCalculator AC;
    
        void generateNoise();
        void getAttributes();

    public:
        WorldGenerator(int seed, int size, Mode mode) : seed(seed), mode(mode), world(size), NG(seed) {}

        void generateWorld();
        World& getWorld() const;
        std::string getWorldCode() const;
};