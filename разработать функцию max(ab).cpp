#include <iostream>
using namespace std;

int max(int a, int b)
{
    return (a>b)? a:b;    
}

int main() 
{
    int x,y,z;
    cout<<"введите значение x:"<<endl;
    cin>>x;
    cout<<"введите значение y:"<<endl;
    cin>>y;
    z= max(x,2*y-x) + max(5*x+3*y,y);
    cout<<"результат:"<<z<<endl;
    return 0;
}
