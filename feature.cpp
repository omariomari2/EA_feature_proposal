#ifndef GAME_SYSTEM_H
#define GAME_SYSTEM_H

#include <string>
#include <vector>
#include <queue>

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
    void detectRivalry();
    void queueFlashback();
};


class Rivalry {
private:
    Team teamA;
    Team teamB;
    std::vector<Flashback> flashbacks;
    std::string legacyStats;

public:
    std::vector<Flashback> getFlashbacks();
    std::string getStats();
};

class FlashbackManager {
private:
    Flashback currentFlashback;
    std::queue<Flashback> flashbackQueue;

public:
    void play();
    void skip();
    void unlockRewards();
};

class Flashback {
private:
    int momentId;
    std::string videoAsset;
    std::string description;
    bool isUnlocked;

public:
    void play();
    void unlock();
};

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
