// Лабораторная работа № 1. Вариант 40.
// Выполнил: Дворников М.С., группа ПИ-54.
#include <iostream>
#include <windows.h>
using namespace std;

// ===== Расчётные функции варианта =====

// Длина волны
double waveLength(double v, double f) {
    return v / f;
}


// ===== Главная функция: меню =====
int main() {
    SetConsoleOutputCP(CP_UTF8);
    int choice;
    double v, f, lam, T;
    do {
        cout << "\n=== Вариант 40: Расчёты для волн ===\n";
        cout << "1. Длина волны\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Введите параметры v и f: ";
                cin >> v >> f;
                cout << "Длина волны = " << waveLength(v, f) << "\n";
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);
    return 0;
}
