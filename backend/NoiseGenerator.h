#pragma once

class NoiseGenerator {
    private:
        int seed;
    
    public:
        NoiseGenerator() : seed(0) {}
        NoiseGenerator(int seed) : seed(seed) {}

        float getNoise(float x, float y) const;
        float getOctaveNoise(float x, float y) const;
        void setSeed(int seed);
};