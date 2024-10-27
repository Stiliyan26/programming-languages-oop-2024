#include "Item.h"

Item::Item(string ct, tm dp, int iId, string mf, int noi, double p, string t)
    : contentType(ct), datePurchased(dp), itemId(iId), mediaFormat(mf), numberOfItems(noi), price(p), title(t) {}

string Item::getContentType() const { return contentType; }
tm Item::getDatePurchased() const { return datePurchased; }
int Item::getItemId() const { return itemId; }
string Item::getMediaFormat() const { return mediaFormat; }
int Item::getNumberOfItems() const { return numberOfItems; }
double Item::getPrice() const { return price; }
string Item::getTitle() const { return title; }

void Item::setItemId(int iId) { itemId = iId; }

void Item::toString() const {
    cout << contentType << " with title \"" << title << "\" was purchased at price " << price
         << " on date " << datePurchased.tm_mday << "/"
         << (datePurchased.tm_mon + 1) << "/"
         << (datePurchased.tm_year + 1900) << "." << endl;
}
