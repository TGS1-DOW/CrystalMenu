
#pragma once
#include <Geode/Geode.hpp>

namespace Features {
    inline bool noclip = false;
    inline bool clickbot = false;
    inline bool showHitboxes = false;
    inline float hitboxScale = 1.0f;

    void toggleNoclip();
    void toggleClickbot();
    void toggleHitboxes();
    void enableAllIcons();
    void enableAllColors();
    void bypassMainLevels();
    void uploadCustomIcons();
    void startRecording();
    void playReplay();
    void injectDLL();
    void useFFmpeg();
}

namespace UI {
    void setupMenu();
}
