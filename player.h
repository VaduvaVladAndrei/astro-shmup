#ifndef PLAYER_H
#define PLAYER_H

struct Player{
    int health;
};

void drawPlayer();
void drawPlayer(Vector2 ballPosition){
    Color ballColor = DARKBLUE;
    
    BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(ballPosition, 40, ballColor);
        //DrawText("move ball with mouse and click mouse button to change color", 10, 10, 20, DARKGRAY);
    EndDrawing();
}
#endif