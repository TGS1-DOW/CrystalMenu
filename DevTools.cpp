
#include "MyMod.hpp"
using namespace geode::prelude;

void Features::injectDLL() {
    log::info("[DEV] Inject DLL stub called.");
}

void Features::useFFmpeg() {
    log::info("[DEV] Use FFmpeg stub called.");
}

void Features::enableAllIcons() { log::info("[DEV] All icons unlocked (stub)."); }
void Features::enableAllColors() { log::info("[DEV] All colors unlocked (stub)."); }
void Features::bypassMainLevels() { log::info("[DEV] Main level bypassed (stub)."); }
void Features::uploadCustomIcons() { log::info("[DEV] Custom icon upload triggered (stub)."); }
