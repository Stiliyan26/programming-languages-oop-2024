#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <ctime>

class Item {
private:
    std::string contentType;
    tm datePurchased;
    int itemId;
    std::string mediaFormat;
    int numberOfItems;
    double price;
    std::string title;

public:
    Item(std::string ct, tm dp, int iId, std::string mf, int noi, double p, std::string t);
    
    std::string getContentType() const;
    tm getDatePurchased() const;
    int getItemId() const;
    std::string getMediaFormat() const;
    int getNumberOfItems() const;
    double getPrice() const;
    std::string getTitle() const;
    
    void setItemId(int iId);
    
    virtual void toString() const;
    virtual ~Item() = default;
};

#endif 