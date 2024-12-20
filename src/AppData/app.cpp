#include <SDE.hpp>

void AppMain(Window w) {
    ClearBackground(GRAY);
    DrawRectangle(0, 0, 50, GetRenderHeight(), WHITE);

    DrawIcon(25, 25, 50, 50, w.List[0]);
}
