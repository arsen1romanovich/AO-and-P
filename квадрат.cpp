#include <iostream>
using namespace std;

void Cube(float a,float & p, float &S)
{
    p=a*4;
    S=a*a;
}

int main() 
{
    float x, p, S;
    cout<<"введите сторону квадрата"<<endl;
    cin >> x ;
    Cube(x,p,S);
    (p>S)?cout<<"p>S":cout<<"p<=S";
    return 0;
}