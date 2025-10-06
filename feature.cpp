#ifndef GAME_SYSTEM_H
#define GAME_SYSTEM_H


#include <string>
#include <vector>
#include <queue>
#include "include/Flashback.h"
#include "include/FlashbackManager.h"

class Team;
class Flashback;
class Reward;
class GameEvent;
class Rivalry;


class RivalryManager {
private:
    std::vector<Rivalry> rivalries;
    GameEvent upcomingRivalryGame;

public:
    RivalryManager() {}

    void detectRivalry() {
        // Example: detect rivalries based on some criteria (stub)
        if (!rivalries.empty()) {
            // Set the next rivalry game (stub logic)
        }
    }

    void queueFlashback() {
        // Example: queue a flashback for the next rivalry (stub)
        if (!rivalries.empty()) {
            // rivalries[0].addFlashback(...);
        }
    }

    void addRivalry(const Rivalry& rivalry) {
        rivalries.push_back(rivalry);
    }

    const std::vector<Rivalry>& getRivalries() const {
        return rivalries;
    }
};


class Rivalry {
private:
    Team teamA;
    Team teamB;
    std::vector<Flashback> flashbacks;
    std::string legacyStats;

public:
    Rivalry(const Team& a, const Team& b, const std::string& stats = "")
        : teamA(a), teamB(b), legacyStats(stats) {}

    std::vector<Flashback> getFlashbacks() {
        return flashbacks;
    }

    std::string getStats() {
        return legacyStats;
    }

    void addFlashback(const Flashback& fb) {
        flashbacks.push_back(fb);
    }
};

// ...existing code...

// ...existing code...

class RewardManager {
private:
    std::vector<Reward> unlockedRewards;
    std::vector<Reward> availableRewards;

public:
    void unlock();
    void grantReward();
};

class Reward {
private:
    std::string rewardType;
    bool isUnlocked;

public:
    void unlock();
};

class ScheduleSystem {
private:
    std::vector<GameEvent> upcomingGames;
    GameEvent currentGame;

public:
    void checkForRivalry();
    void notifyManager();
};

class Player {
private:
    std::vector<Reward> unlockedRewards;
    std::vector<Flashback> flashbackHistory;

public:
    void unlockReward();
    void viewFlashback();
};

class Team {
private:
    std::string name;
    std::string history;

public:
    std::vector<Rivalry> getRivalries();
    std::string getLegacyStats();
};

class GameEvent {
private:
    std::string eventType;
    std::vector<Team> teams;
    std::string outcome;
    std::string highlightClip;

public:
    void playHighlight();
};

#endif // GAME_SYSTEM_H
