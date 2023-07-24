#ifndef PLAYER_H
#define PLAYER_H

struct Player{
    int health;
    Texture2D texture;
};

void drawPlayer();
void drawPlayer(struct Player player,Vector2 playerPosition){
    BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawCircleV(playerPosition, 40, DARKBLUE);
    EndDrawing();
}

struct Player initializePlayer(int health, char* texturePath);
struct Player initializePlayer(int health, char* texturePath){
    struct Player player;
    player.health=health;
    player.texture=LoadTexture(texturePath);
    
    return player;
}
#endif