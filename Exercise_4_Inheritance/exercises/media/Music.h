#ifndef MUSIC_H
#define MUSIC_H

#include "Item.h"
#include <string>

class Music : public Item {
private:
    std::string bandOrArtist;

public:
    Music(std::string ct, tm dp, int iId, std::string mf, int noi, double p, 
          std::string t, std::string bo);
    
    std::string getBandOrArtist() const;
    
    void playOnCD() const;
    void toString() const override;
};

#endif 