#pragma once

#include <Geode/loader/Mod.hpp>
#include <filesystem>

class Config {
public:
    Config();

    static Config* get();

    geode::Severity getConsoleLogLevel();
    bool shouldLogMillisconds();
    int getHeartbeatThreshold();
    int getFontSize();
    bool hasConsole();
    cocos2d::ccColor3B getConsoleForegroundColor();
    cocos2d::ccColor3B getConsoleBackgroundColor();
    cocos2d::ccColor3B getLogInfoColor();
    cocos2d::ccColor3B getLogWarnColor();
    cocos2d::ccColor3B getLogErrorColor();
    cocos2d::ccColor3B getLogDebugColor();

    const std::filesystem::path& getUniquePath();

private:
    geode::Mod* m_geode = nullptr;
    geode::Mod* m_mod = nullptr;
    std::filesystem::path m_uniquePath;
};