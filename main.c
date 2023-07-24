#include<stdio.h>
#include "raylib.h"
#include "player.h"

void initialize(){
    const int screenWidth=450;
    const int screenHeight=800;
    InitWindow(screenWidth,screenHeight,"AstroShmup");
    SetTargetFPS(144);
}

int main(){
    initialize();
    Vector2 playerPosition={225.0f, 750.0f};
    struct Player player = initializePlayer(99,"player.png");
    while(!WindowShouldClose()){
        playerPosition = GetMousePosition();
        drawPlayer(player,playerPosition);
    }
    CloseWindow();
}