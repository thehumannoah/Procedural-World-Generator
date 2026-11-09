#pragma once

enum class Biome {
    Empty,
    DeepWater,
    ShallowWater,
    Shore,
    Beach,
    Forest,
    Mountain,
    MountainTop
};

struct Tile {
    float elevationValue = 0;
    int temperature = 0;
    Biome biome = Biome::Empty;
};