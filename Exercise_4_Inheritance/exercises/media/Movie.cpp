#include "Movie.h"
#include <iostream>

Movie::Movie(std::string ct, tm dp, int iId, std::string mf, int noi, double p, 
             std::string t, std::string r)
    : Item(ct, dp, iId, mf, noi, p, t), rating(r) {}

std::string Movie::getRating() const { return rating; }

void Movie::playOnDVD() const {
    std::cout << "Playing movie \"" << getTitle() << "\" on DVD." << std::endl;
}

void Movie::playOnVideo() const {
    std::cout << "Playing movie \"" << getTitle() << "\" on Video." << std::endl;
}

void Movie::toString() const {
    Item::toString();
    std::cout << "Rating: " << getRating() << std::endl;
}