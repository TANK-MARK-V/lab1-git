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

// Скорость волны
double waveSpeed(double lambda, double T) {
    return lambda / T;
}


// ===== Главная функция: меню =====
int main() {
    // Для русского языка
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int choice;
    double v, f, lambda, T;
    do {
        cout << "\n=== Вариант 40: Калькулятор расчётов для волн ===\n";
        cout << "1. Длина волны\n";
        cout << "2. Скорость волны\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\nВведите скорость распространения v (м/с): ";
                cin >> v;
                cout << "Введите частоту f (Гц): ";
                cin >> f;
                cout << "\nРЕЗУЛЬТАТ:\n";
                cout << "Длина волны λ = " << waveLength(v, f) << " м\n";
                break;
                
            case 2:
                cout << "\nВведите длину волны λ (м): ";
                cin >> lambda;
                cout << "Введите период T (с): ";
                cin >> T;
                cout << "\nРЕЗУЛЬТАТ:\n";
                cout << "Скорость волны v = " << waveSpeed(lambda, T) << " м/с\n";
                break;
                
            case 0:
                cout << "\nРабота завершена. До свидания!\n";
                break;
                
            default:
                cout << "\nОшибка: такого пункта нет. Попробуйте снова.\n";
        }
    } while (choice != 0);
    return 0;
}
