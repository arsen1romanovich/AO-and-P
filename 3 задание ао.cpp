#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int MIN_LB = 1;              // нижний предел  вывода в фунтах
    const int MAX_LB = 10;            // верхний предел  вывода в фунтах
    const double KG_PER_LB = 0.453;   // перевод фунтов в килограммы
    const int FIELD_W = 5;             // ширина поля вывода

    cout << setw(FIELD_W) << "фунты" << " | " << setw(FIELD_W) << "кг" << endl;
    cout << "---------------" << endl;

    // Цикл от MIN_LB до MAX_LB
    for (int l = MIN_LB; l <= MAX_LB; ++l)
    {
        double kg = l * KG_PER_LB;

        // Вывод значений с выравниванием
        cout << setw(FIELD_W) << l << " | "
             << setw(FIELD_W) << fixed << setprecision(3) << kg
             << endl;
    }

    return 0;
}