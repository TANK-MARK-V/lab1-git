// Лабораторная работа № 1. Вариант 40.
// Выполнил: Дворников М.С., группа ПИ-54.
#include <iostream>
using namespace std;

// ===== Расчётные функции варианта =====

// Длина волны
double waveLength(double v, double f) {
    if (f == 0) return 0;
    return v / f;
}

// Скорость волны
double waveSpeed(double lambda, double T) {
    if (T == 0) return 0;
    return lambda / T;
}


// ===== Главная функция: меню =====
int main() {
    int choice;
    double v, f, lambda, T;
    do {
        cout << "\n=== Variant 40: Waves calculator ===\n";
        cout << "1. Wave length\n";
        cout << "2. Wave speed\n";
        cout << "0. exit\n";
        cout << "Choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nEnter v (m/s): ";
                cin >> v;
                cout << "Enter f (Hz): ";
                cin >> f;
                cout << "\nRESULT:\n";
                cout << "Wave length λ = " << waveLength(v, f) << " m\n";
                break;
                
            case 2:
                cout << "\nEnter λ (m): ";
                cin >> lambda;
                cout << "Enter T (s): ";
                cin >> T;
                cout << "\nRESULT:\n";
                cout << "Wave speed v = " << waveSpeed(lambda, T) << " m/s\n";
                break;
                
            case 0:
                cout << "\nWell done!\n";
                break;
                
            default:
                cout << "\nError: there is no option with this num. Try again.\n";
        }
    } while (choice != 0);
    return 0;
}
