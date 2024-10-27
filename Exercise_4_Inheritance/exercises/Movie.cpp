#include "Movie.h"

Movie::Movie(string ct, tm dp, int iId, string mf, int noi, double p, string t, string r)
    : Item(ct, dp, iId, mf, noi, p, t), rating(r) {}

string Movie::getRating() const { return rating; }

void Movie::playOnDVD() const {
    cout << "Playing movie \"" << getTitle() << "\" on DVD." << endl;
}

void Movie::playOnVideo() const {
    cout << "Playing movie \"" << getTitle() << "\" on Video." << endl;
}

void Movie::toString() const override {
    Item::toString();
    cout << "Rating: " << getRating() << endl;
}
