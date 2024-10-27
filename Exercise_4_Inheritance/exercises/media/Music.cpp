#include "Music.h"
#include <iostream>

Music::Music(std::string ct, tm dp, int iId, std::string mf, int noi, double p, 
             std::string t, std::string bo)
    : Item(ct, dp, iId, mf, noi, p, t), bandOrArtist(bo) {}

std::string Music::getBandOrArtist() const { return bandOrArtist; }

void Music::playOnCD() const {
    std::cout << "Playing music \"" << getTitle() << "\" on CD." << std::endl;
}

void Music::toString() const {
    Item::toString();
    std::cout << "Band/Artist: " << getBandOrArtist() << std::endl;
}