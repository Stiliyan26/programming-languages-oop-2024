#include "Music.h"

Music::Music(string ct, tm dp, int iId, string mf, int noi, double p, string t, string bo)
    : Item(ct, dp, iId, mf, noi, p, t), bandOrArtist(bo) {}

string Music::getBandOrArtist() const { return bandOrArtist; }

void Music::playOnCD() const {
    cout << "Playing music \"" << getTitle() << "\" on CD." << endl;
}

void Music::toString() const override {
    Item::toString();
    cout << "Band/Artist: " << getBandOrArtist() << endl;
}
