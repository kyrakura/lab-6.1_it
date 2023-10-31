#include <iostream>
#include <iomanip>
#include <ctime>
#include <Windows.h>
using namespace std;

const int N = 25;

void Create(int a[], const int size, const int Low, const int High) {
    for (int i = 0; i < size; i++) {
        a[i] = Low + rand() % (High - Low + 1);
    }
}

void Print(int a[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(4) << a[i];
    }
    cout << endl;
}

int Count(int a[], const int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] < 0 && i % 3 != 0) {
            count++;
        }
    }
    return count;
}
double MinMax(int a[], const int size) {
    if (size == 0) {
        return 0.0;
    }

    int min = a[0];
    int max = a[0];

    for (int i = 1; i < size; i++) {
        if (a[i] < min) {
            min = a[i];
        }
        if (a[i] > max) {
            max = a[i];
        }
    }

    return static_cast<double>(min + max) / 2.0;
}

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand((unsigned)time(NULL));
    int a[N];
    int Low = -11;
    int High = 13;

    Create(a, N, Low, High);

    cout << "Початковий масив: ";
    Print(a, N);

    int count = Count(a, N);

    cout << "Кількість від'ємних елементів, крім кратних 3: " << count << endl;

    double averageMinMax = MinMax(a, N);
    cout << "Середнє арифметичне максимального та мінімального елементів: " << averageMinMax << endl;

    return 0;
}
