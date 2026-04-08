#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x;
    cout << "введите баллы (0-100): ";
    cin >> x;

    if (x < 0 || x > 100) return cout << "Ошибка" << endl, 0;

    if (x >= 90) cout << "отлично";
    else if (x >= 70) cout << "хорошо";
    else cout << (x >= 50 ? "удовлетворительно" : "неудовлетворительно");
    cout << endl;

    return 0;
}