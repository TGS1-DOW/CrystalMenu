
#include "MyMod.hpp"
using namespace geode::prelude;

namespace {
    std::vector<std::pair<float, bool>> replayData;
    float accumulator = 0.f;
    size_t index = 0;
    bool recording = false, playing = false;
}

void Features::startRecording() {
    replayData.clear();
    recording = true;
    playing = false;
    accumulator = 0;
    log::info("Recording started.");
}

void Features::playReplay() {
    if (!replayData.empty()) {
        recording = false;
        playing = true;
        accumulator = 0;
        index = 0;
        log::info("Playing replay.");
    }
}

class $modify(ReplayBotLayer, GJBaseGameLayer) {
    void update(float dt) {
        GJBaseGameLayer::update(dt);
        accumulator += dt;

        if (recording) {
            replayData.emplace_back(accumulator, m_player1->m_isHolding);
            accumulator = 0;
        } else if (playing && index < replayData.size()) {
            auto [delay, held] = replayData[index];
            if (accumulator >= delay) {
                if (held) m_player1->pushButton(PlayerButton::Jump);
                else m_player1->releaseButton(PlayerButton::Jump);
                accumulator = 0;
                ++index;
            }
        }
    }
};
