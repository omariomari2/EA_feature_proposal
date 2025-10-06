#ifndef FLASHBACK_H
#define FLASHBACK_H

#include <string>

class Flashback {
private:
    int momentId;
    std::string videoAsset;
    std::string description;
    bool isUnlocked;

public:
    Flashback(int id = 0, const std::string& asset = "", const std::string& desc = "");
    void play();
    void unlock();
    bool unlocked() const;
};

#endif // FLASHBACK_H
