#include <iostream>
using namespace std;

// Функция создает динамический массив из n элементов,
// заполняет его квадратами индексов и возвращает указатель на массив.
int* creat(int n)
{
    int* mas = new int[n];
    for (int i = 0; i < n; i++)
        mas[i] = i * i;
    return mas;
}

// Функция выводит элементы массива длины n.
void print(int* mas, int n)
{
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    cout << "\n";
}

int main()
{
    int n = 5;
    int* a = creat(n);

    print(a, n);

    delete[] a; // Освобождаем выделенную память
    return 0;
}