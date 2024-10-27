#ifndef MOVIE_H
#define MOVIE_H

#include "Item.h"
#include <string>

class Movie : public Item {
private:
    std::string rating;

public:
    Movie(std::string ct, tm dp, int iId, std::string mf, int noi, double p, 
          std::string t, std::string r);
    
    std::string getRating() const;
    
    void playOnDVD() const;
    void playOnVideo() const;
    void toString() const override;
};

#endif 