#include <iostream>
#include <cstdlib>  

using namespace std;

class MyArray
{
    int size;
    char *p;

public:
    MyArray(int num);  
    ~MyArray() { delete[] p; }  
    char &put(int i);  
    char get(int i);   
};

MyArray::MyArray(int num)
{
    p = new char[num];  

    if (!p)
    {
        cout << "Allocation error \n";  
        exit(1);
    }
    size = num;
}

char &MyArray::put(int i)
{
    if (i < 0 || i >= size)
    {
        cout << "Bounds error !!!\n";  
        exit(1);
    }

    return p[i];  
}

char MyArray::get(int i)
{
    if (i < 0 || i >= size)
    {
        cout << "Bounds error !!!\n";  
        exit(1);
    }
    
    return p[i];  
}

int main()
{
    MyArray a(10);  

    a.put(3) = 'X';  
    a.put(2) = 'R';  

    
    cout << a.get(3) << "\n" << a.get(2);
    cout << "\n";

    
    a.put(11) = '!';

    return 0;
}
