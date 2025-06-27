
#include "MyMod.hpp"
#include <Geode/modify/GJBaseGameLayer.hpp>
using namespace geode::prelude;

void Features::toggleClickbot() {
    clickbot = !clickbot;
    log::info("Clickbot: {}", clickbot);
}

class $modify(ClickbotLayer, GJBaseGameLayer) {
    void pushButton(PlayerButton btn) {
        GJBaseGameLayer::pushButton(btn);
        if (Features::clickbot)
            AudioEngine::sharedEngine()->playEffect("clickSound.mp3"_spr);
    }
};
