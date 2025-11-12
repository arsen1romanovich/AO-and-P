##include <iostream>

using namespace std;
int main()
{
    cout << "x \ty \t && \t ||" << endl;
    cout << "0 \to \t " << (0 && 0) << \t " << (0 || 0) << endl;
    cout << "0 \t 1 \t << (0 && 1) << \t << (0 || 1) << endl;
    cout << "1 \to \t " << (1 && 0) << \t 11 << (1 | 0) << endl;
    cout << "1 \t 1 \t << (1 && 1) << \t << (1 || 1) << endl;
    return 0;
}