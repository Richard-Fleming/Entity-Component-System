#include <SDL2/SDL.h>
#include <iostream>
#include <string>
#include "Systems.h"

class Game
{
public:

    Game();
    ~Game();
    void run();
    void update();
    void endGame();

private:

    bool m_gameIsRunning;
    SDL_Window* gWindow;
    SDL_Surface* gScreenSurface;
    SDL_Surface* gXOut;

    const int SCREEN_WIDTH = 640;
    const int SCREEN_HEIGHT = 480;

    Entity player;
    HealthSystem hSystem;

};