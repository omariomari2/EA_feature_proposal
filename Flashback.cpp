#include "include/Flashback.h"

Flashback::Flashback(int id, const std::string& asset, const std::string& desc)
    : momentId(id), videoAsset(asset), description(desc), isUnlocked(false) {}

void Flashback::play() {
    if (isUnlocked) {
        // Logic to play the video asset (stub)
    }   else {
        // Logic to notify that the flashback is locked (stub)
    }   
}

void Flashback::unlock() {
    isUnlocked = true;
}

bool Flashback::unlocked() const {
    return isUnlocked;
}
