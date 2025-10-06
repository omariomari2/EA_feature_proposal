#include "include/FlashbackManager.h"

FlashbackManager::FlashbackManager() {}

void FlashbackManager::play() {
    if (!flashbackQueue.empty()) {
        currentFlashback = flashbackQueue.front();
        flashbackQueue.pop();
        currentFlashback.play();
    }
}

void FlashbackManager::skip() {
    if (!flashbackQueue.empty()) {
        flashbackQueue.pop();
    }
}

void FlashbackManager::unlockRewards() {
    currentFlashback.unlock();
}

void FlashbackManager::queueFlashback(const Flashback& fb) {
    flashbackQueue.push(fb);
}
