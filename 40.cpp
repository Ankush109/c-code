#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void set_roll_number(int);
    void get_roll_number(void);

};
void student ::set_roll_number(int r)
{
    roll = r;
}
void student ::get_roll_number()
{
    cout << "the roll number is " << roll;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks obtained in maths are" << maths << endl;
    cout << "the marks obtained in physics are" << physics << endl;
}
// /  	                        Public Derivation      	Private Derivation    	Protected Derivation
// Private members           	Not Inherited           Not Inherited              	Not Inherited              
// Protected members           	Protected                Private                         	Protected                    
// Public members           	Public	                 Private                    Protected                  
class result :public exam{
    float percentage;
    public :
    void display(){
        get_marks();
        get_roll_number();
        cout<<"your percentage is"<<(maths+physics)/2<<endl;
    }
};
int main()
{
    result ankush;
    ankush.set_roll_number(69);
    ankush.set_marks(99.9,100.0);
    ankush.display();
    return 0;
}