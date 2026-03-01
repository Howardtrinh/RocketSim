#include "raylib.h"

int main() {
    InitWindow(1200, 800, "Rocket + Earth (raylib)");
    Camera3D cam{};
    cam.position = { 0.0f, 8.0f, 18.0f };
    cam.target   = { 0.0f, 0.0f, 0.0f };
    cam.up       = { 0.0f, 1.0f, 0.0f };
    cam.fovy     = 45.0f;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground({10, 12, 18, 255});
        BeginMode3D(cam);

        DrawSphere({0,0,0}, 5.0f, BLUE);                       // Earth
        DrawCylinder({0,6.0f,0}, 0.2f, 0.2f, 2.0f, 16, GRAY);   // Rocket body
        DrawCylinder({0,7.2f,0}, 0.2f, 0.0f, 0.6f, 16, RED);    // Nose cone

        EndMode3D();
        DrawText("ESC to quit", 20, 20, 20, RAYWHITE);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}