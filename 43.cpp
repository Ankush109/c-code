#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "bloody  hell";
    }
};
class base2
{
public:
    void greet()
    {
        cout << "fuck off";
    }
};
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet(); // ambiguity resolution is solved
    }
};

class b
{
    int a;

public:
    void say()
    {
        cout << "hello world" << endl;
    }
};
class d :public b
{
    int a;

public:
    void say()
    {
        cout << "hello mfs" << endl;
    }

} int main()
{
    base1 base1obj;
    base2 base2obj;
    // base1obj.greet();
    //  base2obj.greet();
    derived d;
    d.greet();
    return 0;
}