#include <iostream>
using namespace std;
void print (int max[], int n)
{ 
    for (int i = 0; i < n; i++)
        cout << max[i] << "\t"; 
    cout << endl;
}
int main()
{ 
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    print(a, 10);
    cout << endl;
    print (a, 7);
    print(a, 13);
    return 0;
} 