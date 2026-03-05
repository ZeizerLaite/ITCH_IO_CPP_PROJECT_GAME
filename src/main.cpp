#include <iostream>
#include <fstream>
#include <raylib-cpp.hpp>
#include <cstdint>
namespace entities{
class Entity 
{
    public:
    uint8_t health = 100;
    //Add the missing arguments and also make the other extended classes (player, per-type enemy)
    private:

};
}
namespace fstream{
void loadSprites()
{
    //Add the image loading from fstream maybe?
};
}

namespace levels
{
    class level
    {
        public:

        private:
        //find datatype for images to have background
        uint8_t surviveTimePerWave;
        char difficulty;
        uint8_t waves;
        uint8_t increasingAmountOfEnemies;
    };
}

int main() {
    
    // Initialization
    int screenWidth = 800;
    int screenHeight = 450;

    raylib::Color textColor(LIGHTGRAY);
    raylib::Window w(screenWidth, screenHeight, "Raylib C++ Starter Kit Example");
    
    SetTargetFPS(60);

    // Main game loop
    while (!w.ShouldClose()) // Detect window close button or ESC key
    {
        // Update

        // TODO: Update your variables here

        // Draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        textColor.DrawText("Congrats! You created your first window!", 190, 200, 20);
        EndDrawing();
    }

    return 0;
}