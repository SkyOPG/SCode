all:
	g++ -o sde.exe ./src/*.cpp ./src/**/*.cpp -Wall -I./includes -L./lib -lraylib -ldiscord-rpc -lgdi32 -lwinmm
additional:
	em++ ./src/base/main.cpp
other:
	em++ src/main.cpp src/backend/Objects/Ball.cpp src/backend/Objects/Paddle.cpp src/backend/screens/builder.cpp src/backend/screens/SetTheme.cpp src/balls/Ball.cpp src/paddles/Paddle.cpp src/screens/Game/Default.cpp src/screens/Game/Timed.cpp src/screens/scenes/GameMode.cpp src/screens/scenes/Loading.cpp src/screens/scenes/TitleScreen.cpp src/util/checkCollisions.cpp src/util/checkForKeyEvents.cpp src/util/Colors.cpp src/util/DrawTable.cpp src/util/SettingsClass.cpp src/util/StartWindow.cpp -o out/html/pong.html -I./includes --std=c++17 -Os -Wall ./lib/libraylib.a  	-s USE_GLFW=3  	-s ASYNCIFY