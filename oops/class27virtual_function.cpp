#include <iostream>
#include <cstring>
using namespace std;

class alok
{
protected:
    string title;
    float rate;

public:
    alok(string s, float r)
    {
        title = s;
        rate = r;
    }
    virtual void display()/*if we not use virtual word then pointer use this display function as a default
                            but this time the pointer use dispaly function of class derived and if there is
                            no display function in derived class then it use virtual display function   */
    {
        cout<<"archit"<<endl;
    }
};

class video : public alok
{
    float videolen;

public:
    video(string s, float r, float vl) : alok(s, r)
    {
        videolen = vl;
    }
    void display()
    {
        cout << "The title is " << title << endl;
        cout << "The rating is " << rate << endl;
        cout << "The length of video is " << videolen << " min " << endl;
    }
};
class text : public alok
{
    int textlen;

public:
    text(string s, float r, int tl) : alok(s, r)
    {
        textlen = tl;
    }
    void display()
    {
        cout << "The title is " << title << endl;
        cout << "The rating is " << rate << endl;
        cout << "The length of text is " << textlen << " min " << endl;
    }
};

int main()
{
    string title;
    int tlength;
    float rate, vlength;

    // for video
    title = "alok video";
    rate = 4.6;
    vlength = 7.5;
    video arvideo(title, rate, vlength);
    //arvideo.display();
    
    //for text
    title = "alok text";
    rate = 4.6;
    tlength = 7.5;
    text artext(title, rate, tlength);
   // artext.display();
   
    alok* arr[3];
    arr[0]=&arvideo;
    arr[1]=&artext;

    arr[0]->display();
    arr[0]->display();
}