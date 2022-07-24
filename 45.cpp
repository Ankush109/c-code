#include<iostream>
using namespace std;
 
class student{
    protected:
    int roll;
    public:
    void setnumber(int a){
        roll=a;
         
    }
    void printno(void){
        cout<<"your roll is "<<roll<<endl;

    }
};



class test :virtual public student{
    protected:
    float maths,physics;
    public:
    void setmarks(float m1, float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"your result is "<<"maths"<<maths<<"physics"<<physics<<endl;
    }
};


class sports : virtual public student{
    protected:
    float score;
    public:
    void setscore(float sc){
        score =sc;
    }
    void printscore(void){
        cout<<"your pt score is "<<score;
    }

};
class result :public test ,public sports{

private:
float total;
public:
void display(void){
    total=maths+physics+score;
    printno();
    printscore();
    cout<<"your total score is "<<total<<endl;
}



};

int main(){
    result ankush;
    ankush.setnumber(4200);
    ankush.setmarks(78.9,99.6);
    ankush.setscore(9);
    ankush.display();
     return 0;
} 