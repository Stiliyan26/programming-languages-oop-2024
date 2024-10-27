#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <ctime>
#include <iostream>

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
    Item(string ct, tm dp, int iId, string mf, int noi, double p, string t);

    string getContentType() const;
    tm getDatePurchased() const;
    int getItemId() const;
    string getMediaFormat() const;
    int getNumberOfItems() const;
    double getPrice() const;
    string getTitle() const;

    void setItemId(int iId);

    virtual void toString() const;
};

#endif // ITEM_H
