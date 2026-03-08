#include <raylib.h>
#include <iostream>

#include <imgui.h>
#include <rlImGui.h>

int main()
{
	SetTargetFPS(60);
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(800, 450, "Project Whirlwind");

	rlImGuiSetup(true);

	while (!WindowShouldClose()) {
		BeginDrawing();
		ClearBackground(RAYWHITE);

		rlImGuiBegin();

		DrawText("Hello World!", 320, 200, 20, RED);
		DrawRectangle(10, 10, 200,200, {120, 100, 0, 100});
		DrawRectangle(30, 30, 100,100, {120, 100, 10, 127});

		ImGui::Begin("test");

		ImGui::Text("hello");
		ImGui::Button("button");

		ImGui::End();

		rlImGuiEnd();

		EndDrawing();
	}

	rlImGuiShutdown();

	CloseWindow();

	return 0;
}