
#include "MyMod.hpp"
#include <Geode/modify/PlayerObject.hpp>
using namespace geode::prelude;

class $modify(NoclipPlayerObject, PlayerObject) {
    void levelCollisionCheck() {
        if (!Features::noclip)
            PlayerObject::levelCollisionCheck();
    }
};

void Features::toggleNoclip() {
    noclip = !noclip;
    log::info("Noclip: {}", noclip);
}
