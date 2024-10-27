#ifndef MOVIE_H
#define MOVIE_H

#include "Item.h"

class Movie : public Item {
private:
    string rating;

public:
    Movie(string ct, tm dp, int iId, string mf, int noi, double p, string t, string r);

    string getRating() const;

    void playOnDVD() const;
    void playOnVideo() const;
    void toString() const override;
};

#endif
