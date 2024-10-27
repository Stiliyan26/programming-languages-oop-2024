#include "Game.h"

Game::Game(string ct, tm dp, int iId, string mf, int noi, double p, string t, string dl, string _mfg)
    : Item(ct, dp, iId, mf, noi, p, t), difficultyLevel(dl), mfg(_mfg) {}

string Game::getDifficultyLevel() const { return difficultyLevel; }
string Game::getMfg() const { return mfg; }

void Game::playOnCD() const {
    cout << "Playing game \"" << getTitle() << "\" on CD." << endl;
}

void Game::playOnVideo() const {
    cout << "Playing game \"" << getTitle() << "\" on Video." << endl;
}

void Game::toString() const override {
    Item::toString();
    cout << "Difficulty Level: " << getDifficultyLevel() << endl;
    cout << "Manufacturer: " << getMfg() << endl;
}
