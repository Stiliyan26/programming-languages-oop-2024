#ifndef GAME_H
#define GAME_H

#include "Item.h"

class Game : public Item {
private:
    string difficultyLevel;
    string mfg;

public:
    Game(string ct, tm dp, int iId, string mf, int noi, double p, string t, string dl, string _mfg);

    string getDifficultyLevel() const;
    string getMfg() const;

    void playOnCD() const;
    void playOnVideo() const;
    void toString() const override;
};

#endif 
