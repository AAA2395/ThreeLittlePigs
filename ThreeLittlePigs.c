#includes<iostream>
using namespace std;
class House {
public:
int stg;

void Build_house(int st)
{
stg=st;
cout<<st<<"---";


}

};


class Pig {
public:
string n1;
House h1;
void buildhouse(int h)
{
h1.Build_house(h);
cout<<" Strength of House of "<<n1<<endl;
}


};

class wolf {
public:
string n1;

void blow_house(Pig p1)
{
if (p1.h1.stg < 200)
{
eat(p1);
}
}

void eat(Pig p1)
{
cout<<"Wolf ate : "<<p1.n1 <<endl;
}
};

5. Full program in C++ for above story :

#include <iostream>

using namespace std;

class House {
public:
int stg;

void Build_house(int st)
{
stg=st;
cout<<st<<"---";


}

};


class Pig {
public:
string n1;
House h1;
void buildhouse(int h)
{
h1.Build_house(h);
cout<<" Strength of House of "<<n1<<endl;
}


};

class wolf {
public:
string n1;

void blow_house(Pig p1)
{
if (p1.h1.stg < 200)
{
eat(p1);
}
}

void eat(Pig p1)
{
cout<<"Wolf ate : "<<p1.n1 <<endl;
}
};


int main()
{
cout << "The pig leave there home" << endl;
Pig p1, p2, p3;
p1.n1="Pig1";
p2.n1="Pig2";
p3.n1="Pig3";

p1.buildhouse(50);
p2.buildhouse(150);
p3.buildhouse(200);

cout << "Wolf will eat pigs living in the houses of strength less than 200" << endl;
wolf w1; w1.n1="Wolf";
w1.blow_house(p1);
w1.blow_house(p2);
w1.blow_house(p3);


}
