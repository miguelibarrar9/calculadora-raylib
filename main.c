#include "draws.c"
#include "include/raylib.h"
#include <math.h>

//------------------------------------------------------------------------------------------
// Types and Structures Definition
//------------------------------------------------------------------------------------------
typedef enum GameScreen { LOGO = 0, TITLE, GAMEPLAY, ENDING } GameScreen;

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void) {
  // Initialization
  //--------------------------------------------------------------------------------------
  const float screenWidth = 450;
  const float screenHeight = 700;

  InitWindow(screenWidth, screenHeight, "Calculadora");

  GameScreen currentScreen = LOGO;

  // TODO: Initialize variables here!

  SetTargetFPS(60); // Set desired framerate (frames-per-second)

  //--------------------------------------------------------------------------------------
  // Main game loop
  while (!WindowShouldClose()) // Detect window close button or ESC key
  {

    // Update
    //----------------------------------------------------------------------------------

    // Draw
    //----------------------------------------------------------------------------------
    BeginDrawing();

    DrawText("100000000", 170, 50, 20, GRAY);

    DrawRectangle(10, 80, 60, 60, GRAY);
    DrawText("1", 40, 100, 20, BLACK);

    DrawRectangle(80, 80, 60, 60, GRAY);
    DrawText("2", 100, 100, 20, BLACK);

    // TODO: Complete the UI of the Calculator

    ClearBackground(RAYWHITE);

    EndDrawing();
    //----------------------------------------------------------------------------------
  }

  // De-Initialization
  //--------------------------------------------------------------------------------------
  CloseWindow(); // Close window and OpenGL context
  //--------------------------------------------------------------------------------------

  return 0;
}
