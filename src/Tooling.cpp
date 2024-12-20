#include <SDE.hpp>

void DrawIcon(float x, float y, float width, float height, Texture2D txt, int rot) {
    DrawTexturePro(txt, 
        (Rectangle){0, 0, (float)txt.width, (float)txt.height},
        (Rectangle){x, y, width, height},
        (Vector2){(float)txt.width / 2, (float)txt.height / 2},
        rot,
        WHITE
    );
}
