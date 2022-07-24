#include <iostream>
#include <cstring>
using namespace std;
class cwh
{
protected:
    string title;
    float rating;

public:
    cwh(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};
class cwhvideo : public cwh
{
    int videolength;

public:
    cwhvideo(string s, float r, int vl) : cwh(s, r) // derived class er constructor
    {
        videolength = vl;
    }
    void display()
    {
        cout << "this is an amazing with title" << title << endl;
        cout << "ratings " << rating << endl;
        cout << "length of this video" << videolength << endl;
    }
};
class cwhtext : public cwh
{
    int words;

public:
    cwhtext(string s, float r, int wc) : cwh(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "this is an amazing test tutorial with title" << title << endl;
        cout << "ratings tutorial" << rating << endl;
        cout << "number of words in this text tutorial" << words << endl;
    }
};
int main()
{
    char *title = new char[30];
    float rating, vlen;
    int words;
    // video
    title = "anksuh";
    vlen = 4.56;
    rating = 4.89;
    cwhvideo djvideo(title, rating, vlen);
    // djvideo.display();
    // code with harry text
    title = "django tutorial text";
    words = 433;
    rating = 4.19;
    cwhtext djtext(title, rating, words);

    djtext.display();

    cwh *tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}