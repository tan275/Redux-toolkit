#include<iostream>
using namespace std;
class Number
{
    protected:
        int no;
    public:
        Number()
        {
            no=0;
        }
        ~Number(){}
        void setData()
        {
            cout<<"\nEnter Number:";
            cin>>no;
        }
        void display()
        {
            cout<<"\nEnter Number:"<<no;
        }
};

class Name:public Number
{
    protected:
        char nm[15];
    public:
        Name():Number()
        {
            nm[0]='\0';
        }
        ~Name(){}
        void setData()
        {
            Number::setData();
            cout<<"\nName:";
            cin>>nm;
        }
        void display()
        {
            Number::display();
            cout<<"\nName:"<<nm;   
        }
};

class Sports
{
    protected:
        int smrk;
    public:
        Sports()
        {
            smrk=0;
        }
        ~Sports(){}
        void setData()
        {
            cout<<"\nSports Marks:";
            cin>>smrk;
        }
        void display()
        {
            cout<<"\nSports Marks:"<<smrk;
        }
};

class Result:public Name,public Sports
{
    protected:
        int tmrk;
    public:
        Result():Name(),Sports()
        {
            tmrk=0;
        }
        ~Result(){}
        void setData()
        {
            Name::setData();
            Sports::setData();
            cout<<"\nTheory Marks:";
            cin>>tmrk;
        }
        void display()
        {
            Name::display();
            Sports::display();
            cout<<"\nTheory:"<<tmrk;
        }
};

int main()
{
    Result r;
    r.setData();
    r.display();
}