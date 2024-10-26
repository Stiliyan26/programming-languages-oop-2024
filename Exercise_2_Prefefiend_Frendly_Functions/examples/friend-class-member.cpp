class class1;

class class2{
public:
    int getter(class1 o1); 
};


class class1{
    int var;
public:
    void setter(int);
    friend int class2::getter(class1 o1);
};

void class1::setter(int v)
{
    var = v;
}

int class2::getter(class1 o1) 
{
    return o1.var;
}