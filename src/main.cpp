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

    Texture2D txt = LoadTexture("bars-solid.png");
    if(IsTextureValid(txt))
        window.List.push_back(txt);
    else
        return 1;

    runLoop(window, AppMain);

    window.destroy();
    return 0;
}