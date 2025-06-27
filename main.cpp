
#include <Geode/Geode.hpp>
#include "MyMod.hpp"

using namespace geode::prelude;

$on_mod(Loaded) {
    log::info("Ultimate Dev Menu loaded!");
    UI::setupMenu();
}
