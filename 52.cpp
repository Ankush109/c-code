#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setdata(int a, float b)
    {
        id = a;
        price = b;
    }
    void getdata(void)
    {
        cout << "code of this item is " << id;
        cout << "price of this item" << price;
    }
};
int main()
{

    int size = 3;
    // shop *ptr =&size;
    // shop *ptr = new shop[size];
    shop *ptr = new shop[size];
    int p, q;
    shop *ptrtemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "enter id and price of the item" << i + 1 << endl;
        cin >> p >> q;
        // (*ptr).setdata(p,q);
        ptr->setdata(p, q);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
        cout << "item number " << j + 1 << endl;
        ptrtemp->getdata();
        ptrtemp++;
    }

    return 0;
}