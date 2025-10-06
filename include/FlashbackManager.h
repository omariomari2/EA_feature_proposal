#ifndef FLASHBACK_MANAGER_H
#define FLASHBACK_MANAGER_H

#include "Flashback.h"
#include <queue>

class FlashbackManager {
private:
    Flashback currentFlashback;
    std::queue<Flashback> flashbackQueue;

public:
    FlashbackManager();
    void play();
    void skip();
    void unlockRewards();
    void queueFlashback(const Flashback& fb);
};

#endif // FLASHBACK_MANAGER_H
