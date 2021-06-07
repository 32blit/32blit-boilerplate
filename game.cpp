#include "game.hpp"

using namespace blit;

// setup your game here
void init() {
    set_screen_mode(ScreenMode::hires); // lores is the default
}

// This function is called to perform rendering of the game.
// `time` is the amount of milliseconds elapsed since the device was last reset.
void render(uint32_t time) {

    // clear the screen -- screen is a reference to the frame buffer and can be used to draw all things with the 32blit
    screen.pen = Pen(0, 0, 0);
    screen.clear();

    // draw some text at the top of the screen
    screen.pen = Pen(255, 255, 255);
    screen.rectangle(Rect(0, 0, 320, 14));

    screen.pen = Pen(0, 0, 0);
    screen.text("Hello 32blit!", minimal_font, Point(5, 4));
}

// This is called to update your game state.
// `time` is the amount of milliseconds elapsed since the device was last reset and will always be 10ms after the last update.
void update(uint32_t time) {
}
