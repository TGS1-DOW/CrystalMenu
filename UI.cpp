
#include "MyMod.hpp"
using namespace geode::prelude;

void UI::setupMenu() {
    Mod::get()->addCustomMenu([] {
        auto layer = CCLayer::create();
        auto menu = CCMenu::create();
        float y = 250;

        auto addToggle = [&](const char* label, auto&& fn) {
            auto item = CCMenuItemFont::create(label, [=](CCObject*) { fn(); });
            item->setPosition({190, y});
            y -= 30;
            menu->addChild(item);
        };

        addToggle("Toggle Noclip", Features::toggleNoclip);
        addToggle("Toggle Clickbot", Features::toggleClickbot);
        addToggle("Show Hitboxes", Features::toggleHitboxes);
        addToggle("Record Replay", Features::startRecording);
        addToggle("Play Replay", Features::playReplay);
        addToggle("Bypass Main Levels", Features::bypassMainLevels);
        addToggle("Unlock All Icons", Features::enableAllIcons);
        addToggle("Unlock All Colors", Features::enableAllColors);
        addToggle("Upload Custom Icon", Features::uploadCustomIcons);
        addToggle("Inject DLL", Features::injectDLL);
        addToggle("Use FFmpeg API", Features::useFFmpeg);

        menu->setPosition({0, 0});
        layer->addChild(menu);
        return layer;
    });
}
