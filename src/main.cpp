#include <SDE.hpp>

int main(){
    WindowData data = {
        600,
        800,
        true,
        "SkyDE",
        true
    };

    Window window;
    window.create(data);

    window.setFPS(60);

    window.List.push_back(LoadTexture("bars-solid.png"));

    runLoop(window, AppMain);

    window.destroy();
}