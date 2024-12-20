#include <string>
#include <raylib/raylib.hpp>
#include <screen.hpp>
#include <vector>

struct WindowData {
    int height;
    int width;
    bool resizable;
    std::string name;
    bool audio;
};


class Window {
    public:
        void create(WindowData data);
        void destroy();
        void setFPS(int fps);
        void addVolume(int amt);
        void lowerVolume(int amt);
        bool running();
        Screen getScreen();
        void setScreen(Screen scr);
        std::vector<Texture2D> List;
    private:
        Screen scr = Screen::Main;
        WindowData info;
};

void runLoop(Window w, void (*func)(Window));
void AppMain(Window w);
void DrawIcon(float x, float y, float width, float height, Texture2D txt, int rot = 0);