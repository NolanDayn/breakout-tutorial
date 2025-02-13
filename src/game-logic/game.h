/*Breakout*/

#ifndef GAME_H
#define GAME_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

//Represents the current state of the game
enum GameState {
    GAME_ACTIVE,
    GAME_MENU,
    GAME_WIN
};

//Game holds all game related state and functionality
//Combines all data into since class for easy access and manageability
class Game
{
public:
    //game state
    GameState    State;
    bool         Keys[1024];
    unsigned int Width, Height;
    //constructon & destructor
    Game(unsigned int width, unsigned int height);
    ~Game();
    //initialize game state (load all shaders/textures/levels)
    void Init();
    // game loop
    void ProcessInput(float dt);
    void Update(float dt);
    void Render();
};

#endif