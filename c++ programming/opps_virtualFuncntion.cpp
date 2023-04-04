#include<bits/stdc++.h>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:

    CWH(string s,float r)
    {
        title=s;
        rating=r;
    }
virtual void display()
{}
};


class CWHvideo:public CWH{
int videoLength;
public:
CWHvideo(string s,float r,int vl):CWH(s,r)
{
    videoLength=vl;
}

void display()
{
    cout<<"this is an amazing video with title "<<title<<endl;
    cout<<"Rating:"<<" "<<rating<<"out of 5"<<endl;
    cout<<"Length of this video is:"<<videoLength<<" minutes"<<endl;
}
};

class CWHtext:public CWH
{
int wordLength;
public:
CWHtext(string s,float r,int wl):CWH(s,r)
{
    wordLength=wl;
}
void display()
{
    cout<<"this is an amazing txt tortoril with title  "<<title<<endl;
    cout<<"Rating:"<<" "<<rating<<"out of 5"<<endl;
    cout<<"world count is:"<<wordLength<<endl;
}

};



int main()
{
string title;
float rating,vlen;
int words;

//for video
title="c++ tortorial";
vlen=4.56;
rating=4.89;
CWHvideo djvideo(title,rating,vlen);
//djvideo.display();


//for text
title="c++ tortorial text";
 words=456;
rating=4.9;
CWHtext djtxt(title,rating,words);
//djtxt.display();


CWH *tuts[2];
tuts[0]=&djvideo;
tuts[1]=&djtxt;

tuts[0]-> display();
tuts[1]-> display();
    return 0;

}

/*rules of virtual function
1.they are accessed by obeject pointer
2.virtual functions can be a friend of another class
3.they cannot be static
4.a virtual function in base class might may not use in base class*/