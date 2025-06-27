
#include "MyMod.hpp"
#include <Geode/modify/GameObject.hpp>
using namespace geode::prelude;

void Features::toggleHitboxes() {
    showHitboxes = !showHitboxes;
    log::info("Show Hitboxes: {}", showHitboxes);
}

class $modify(HitboxScale, GameObject) {
    CCRect getObjectRect() {
        auto rect = GameObject::getObjectRect();
        if (Features::showHitboxes) {
            rect.size.width *= Features::hitboxScale;
            rect.size.height *= Features::hitboxScale;
        }
        return rect;
    }
};
