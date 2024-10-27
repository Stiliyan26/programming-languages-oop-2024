#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Item {
private:
    string contentType;
    tm datePurchased;
    int itemId;
    string mediaFormat;
    int numberOfItems;
    double price;
    string title;

public:
    Item(string ct, tm dp, int iId, string mf, int noi, double p, string t)
        : contentType(ct), datePurchased(dp), itemId(iId), mediaFormat(mf), numberOfItems(noi), price(p), title(t) {}

    string getContentType() const { return contentType; }
    tm getDatePurchased() const { return datePurchased; }
    int getItemId() const { return itemId; }
    string getMediaFormat() const { return mediaFormat; }
    int getNumberOfItems() const { return numberOfItems; }
    double getPrice() const { return price; }
    string getTitle() const { return title; }

    void setItemId(int iId) { itemId = iId; }

    virtual void toString() const {
        cout << contentType << " with title \"" << title << "\" was purchased at price " << price
             << " on date " << datePurchased.tm_mday << "/"
             << (datePurchased.tm_mon + 1) << "/"
             << (datePurchased.tm_year + 1900) << "." << endl;
    }
};

class Game : public Item {
private:
    string difficultyLevel;
    string mfg;

public:
    Game(string ct, tm dp, int iId, string mf, int noi, double p, string t, string dl, string _mfg)
        : Item(ct, dp, iId, mf, noi, p, t), difficultyLevel(dl), mfg(_mfg) {}

    string getDifficultyLevel() const { return difficultyLevel; }
    string getMfg() const { return mfg; }

    void playOnCD() const {
        cout << "Playing game \"" << getTitle() << "\" on CD." << endl;
    }

    void playOnVideo() const {
        cout << "Playing game \"" << getTitle() << "\" on Video." << endl;
    }

    void toString() const override {
        Item::toString();
        cout << "Difficulty Level: " << getDifficultyLevel() << endl;
        cout << "Manufacturer: " << getMfg() << endl;
    }
};

class Movie : public Item {
private:
    string rating;

public:
    Movie(string ct, tm dp, int iId, string mf, int noi, double p, string t, string r)
        : Item(ct, dp, iId, mf, noi, p, t), rating(r) {}

    string getRating() const { return rating; }

    void playOnDVD() const {
        cout << "Playing movie \"" << getTitle() << "\" on DVD." << endl;
    }

    void playOnVideo() const {
        cout << "Playing movie \"" << getTitle() << "\" on Video." << endl;
    }

    void toString() const override {
        Item::toString();
        cout << "Rating: " << getRating() << endl;
    }
};

class Music : public Item {
private:
    string bandOrArtist;

public:
    Music(string ct, tm dp, int iId, string mf, int noi, double p, string t, string bo)
        : Item(ct, dp, iId, mf, noi, p, t), bandOrArtist(bo) {}

    string getBandOrArtist() const { return bandOrArtist; }

    void playOnCD() const {
        cout << "Playing music \"" << getTitle() << "\" on CD." << endl;
    }

    void toString() const override {
        Item::toString();
        cout << "Band/Artist: " << getBandOrArtist() << endl;
    }
};

int main() {
    tm date = {0};
    date.tm_year = 2023 - 1900;  
    date.tm_mon = 9;            
    date.tm_mday = 27;

   
    Movie movie("Movie", date, 101, "DVD", 1, 19.99, "The Matrix", "PG-13");
    movie.toString();
    movie.playOnDVD();
    movie.playOnVideo();

   
    Game game("Game", date, 102, "Blu-ray", 1, 59.99, "Cyberpunk 2077", "Hard", "CD Projekt");
    game.toString();
    game.playOnCD();
    game.playOnVideo();

   
    Music music("Music", date, 103, "CD", 1, 14.99, "Greatest Hits", "Queen");
    music.toString();
    music.playOnCD();

    return 0;
}
