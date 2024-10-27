#ifndef GAME_H
#define GAME_H

#include "Item.h"
#include <string>

class Game : public Item {
private:
    std::string difficultyLevel;
    std::string mfg;

public:
    Game(std::string ct, tm dp, int iId, std::string mf, int noi, double p, 
         std::string t, std::string dl, std::string _mfg);
    
    std::string getDifficultyLevel() const;
    std::string getMfg() const;
    
    void playOnCD() const;
    void playOnVideo() const;
    void toString() const override;
};

#endif 