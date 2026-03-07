#include <raylib.h>
#include <iostream>

int main()
{
	SetTargetFPS(60);
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "Project Whirlwind");

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);

		DrawText("Hello World!", 320, 200, 20, RED);
		DrawRectangle(10, 10, 200,200, {120, 100, 0, 100});
		DrawRectangle(30, 30, 100,100, {120, 100, 10, 127});

		EndDrawing();
	}

	CloseWindow();

	return 0;
}