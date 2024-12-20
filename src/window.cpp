#include <SDE.hpp>

void Window::create(WindowData data){
    info = data;
    if(data.resizable)
        SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(data.width, data.height, data.name.c_str());
    if(data.audio)
        InitAudioDevice();
}

void Window::destroy(){
    if(info.audio)
        CloseAudioDevice();
    CloseWindow();
}

void Window::setFPS(int fps){
    SetTargetFPS(fps);
}

void Window::addVolume(int amt){
    if(!info.audio)
        return;
            
    SetMasterVolume(GetMasterVolume() + amt);
}

void Window::lowerVolume(int amt){
    if(!info.audio)
        return;
            
    SetMasterVolume(GetMasterVolume() - amt);
}

bool Window::running(){
    return !WindowShouldClose();
}

void runLoop(Window w, void (*func)(Window)){
    while (w.running()) {
        BeginDrawing();
        func(w);
        EndDrawing();
    }
}

Screen Window::getScreen(){
    return scr;
}

void Window::setScreen(Screen scr){
    this->scr = scr;
}