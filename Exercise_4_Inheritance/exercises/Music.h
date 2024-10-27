#ifndef MUSIC_H
#define MUSIC_H

#include "Item.h"

class Music : public Item {
private:
    string bandOrArtist;

public:
    Music(string ct, tm dp, int iId, string mf, int noi, double p, string t, string bo);

    string getBandOrArtist() const;

    void playOnCD() const;
    void toString() const override;
};

#endif 
