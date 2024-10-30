#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <conio.h>

using namespace std; 

const char BELL = '\007';
class Screen {
    short height, width;

    char *cursor, *screen;

    Screen &home() {
        move(0, 0);
        return *this;
    }
    void checkRange(int, int);
    int row();        
    int remSpace();   

public:
    Screen &move(int, int);
    Screen &reSize(int, int, char = '#');
    Screen &lineX(int, int, int, char);
    Screen &display();
    Screen &down();
    Screen &forward();
    Screen &set(char *);
    Screen &set(char);
    int isEqual(Screen &);  
    void copy(Screen &);
    Screen(int = 8, int = 40, char = '#');
    ~Screen();
};

void lineY(Screen &s, int row, int col, int len, char ch) {
    s.move(row, col);
    for (int i = 0; i < len; i++)
        s.set(ch).down();
}

void Screen::checkRange(int row, int col) {
    if (row < 1 || row > height || col < 1 || col > width) {
        cerr << "Coordinate (" << row << ',' << col << ") is out of range.\n";  
        exit(1);
    }
}

int Screen::row() {  
    int pos = cursor - screen + 1;
    return ((pos + width - 1) % width) + 1;
}

int Screen::remSpace() {  
    int sz = width * height;
    return (screen + sz - cursor - 1);
}

Screen &Screen::move(int r, int c) {
    checkRange(r, c);
    int row = (r - 1) * width;
    cursor = screen + row + c - 1;
    return *this;
}

Screen &Screen::reSize(int h, int w, char bk) {
    Screen *ps = new Screen(h, w, bk);
    char *pNew = ps->screen;
    char *pOld = screen;
    while (*pOld && *pNew)
        *pNew++ = *pOld++;
    this->Screen::~Screen();
    *this = *ps;
    return *this;
}

Screen &Screen::lineX(int row, int col, int len, char ch) {
    move(row, col);
    for (int i = 0; i < len; i++)
        set(ch).forward();
    return *this;
}

Screen &Screen::display() {
    char *p;
    for (int i = 0; i < height; i++) {
        cout << '\n';
        int offset = width * i;
        for (int j = 0; j < width; j++) {
            p = screen + offset + j;
            cout.put(*p);
        }
    }
    return *this;
}

Screen &Screen::down() {
    if (row() > height)
        cout.put(BELL);
    else
        cursor += width;
    return *this;
}

Screen &Screen::forward() {
    ++cursor;
    if (*cursor == '\0')
        home();
    return *this;
}

Screen &Screen::set(char *s) {
    int space = remSpace();
    int len = strlen(s);
    if (space < len) {
        cerr << "String will be truncated from position " << space 
             << ". New string length will be " << len << ".\n";
        len = space;
    }
    for (int i = 0; i < len; i++)
        *cursor++ = *s++;
    return *this;
}

Screen &Screen::set(char ch) {
    if (ch == '\0')
        cerr << "Symbol NULL is ignored.\n";
    else
        *cursor = ch;
    return *this;
}

int Screen::isEqual(Screen &s) {  
    if (width != s.width || height != s.height)
        return 0;
    char *p = screen, *q = s.screen;
    if (p == q)
        return 1;
    while (*p && *q && *p++ == *q++)
        ;
    if (*p || *q)
        return 0;
    return 1;
}

void Screen::copy(Screen &s) {
    delete screen;
    height = s.height;
    width = s.width;
    screen = cursor = new char[height * width + 1];
    if (screen == NULL) {
        cerr << "Out of memory.\n";
        this->Screen::~Screen();
        exit(1);
    }
    strcpy(screen, s.screen);
}

Screen::Screen(int high, int widt, char bkgr) {
    int sz = high * widt;
    height = high;
    width = widt;
    cursor = screen = new char[sz + 1];
    if (screen == NULL) {
        cerr << "Out of memory.\n";
        this->Screen::~Screen();
        exit(1);
    }
    char *ptr = screen, *endptr = screen + sz;
    while (ptr != endptr)
        *ptr++ = bkgr;
    *ptr = '\0';
}

Screen::~Screen() {
    delete screen;
}

int main() {  
    Screen X(3, 3), Y(3, 3);
    cout << "Objects are equal " << X.isEqual(Y) << '\n';
    Y.reSize(6, 6);
    
    cout << "Objects are not equal " << X.isEqual(Y) << '\n';
    lineY(Y, 1, 1, 6, '*');
    lineY(Y, 1, 6, 6, '*');
    
    Y.lineX(1, 2, 4, '*').lineX(6, 2, 4, '*').move(3, 3);
    Y.set("hi").lineX(4, 3, 2, '^').display();
    X.reSize(6, 6);
    
    cout << "\n\nObjects are not equal " << X.isEqual(Y) << '\n';
    X.copy(Y);
    
    cout << "Objects are equal " << X.isEqual(Y) << '\n';
    cin.get();
    
    return 0;  
}

//1.Позовлява чейнването на други методи на класа избороявайки ги например: 
// Y.lineX(1, 2, 4, '*').lineX(6, 2, 4, '*').move(3, 3); пдообно на Buildern Pattern
// 2. Избягва временни променливи
/// 3. Позволяваме да работим със същия обект а не със копие, защото връща референция към текущия обект
