#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() 
{
    float x,y;
    std:: cout << "введите значение x" << std:: endl;
    cin>>x;
    y=sin(sqrt(x+1))-sin(sqrt(x-1));
    std:: cout<<"y="<<setprecision(4)<<y<< std:: endl;
    return 0;
    

}
