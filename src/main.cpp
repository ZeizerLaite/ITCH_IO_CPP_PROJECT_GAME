#include <iostream>
#include <fstream>
#include <raylib-cpp.hpp>
#include <cstdint>
#include <string>
namespace entities{
class Entity 
{
    protected:
    uint8_t health;   
    uint8_t movespeed;
    uint8_t damage;
};

class Player:public Entity
{
    public:
    Player() { health = 100; movespeed = 10; damage = 20;}
    void movement(char key)
    {
        int keyint = (int)key;
        switch(keyint)
        {
            case 87:
            move(87);
            break;
            case 65:
            move(65);
            break;
            case 83:
            move(83);
            break;
            case 68:
            move(68);
            break;
        }
    }

    private:
    const char* keyboardmovement[4] = {"w","s","a","d"};
    void move(int key)
    {

    }
};

////////////////////////////////////////////////
}
namespace fstream{
void loadSprites()
{
    //Add the image loading from fstream maybe?
};
std::fstream readPrevData(std::fstream dataFile) //probably a wrong way to do it, i need to watch some tutorials, it's been years since I coded something and also need to learn raylib
{

}

////////////////////////////////////////////////////////////////////
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


    //////////////////////////////////////////////////////////////////////////
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