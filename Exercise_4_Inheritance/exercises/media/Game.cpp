#include "Game.h"
#include <iostream>

Game::Game(std::string ct, tm dp, int iId, std::string mf, int noi, double p, 
           std::string t, std::string dl, std::string _mfg)
    : Item(ct, dp, iId, mf, noi, p, t), difficultyLevel(dl), mfg(_mfg) {}

std::string Game::getDifficultyLevel() const { return difficultyLevel; }
std::string Game::getMfg() const { return mfg; }

void Game::playOnCD() const {
    std::cout << "Playing game \"" << getTitle() << "\" on CD." << std::endl;
}

void Game::playOnVideo() const {
    std::cout << "Playing game \"" << getTitle() << "\" on Video." << std::endl;
}

void Game::toString() const {
    Item::toString();
    std::cout << "Difficulty Level: " << getDifficultyLevel() << std::endl;
    std::cout << "Manufacturer: " << getMfg() << std::endl;
}