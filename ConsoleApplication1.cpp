// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    /*int x, y, z;
    std::cout << "Введите первое число\n";
    std::cin >> x;
    std::cout << "Введите второе число\n";
    std::cin >> z;
    std::cout << "Введите третье число\n";
    std::cin >> y;
    if (x > y && x > z) {
        std::cout << "Первое число наибольшее";
    }
    else if (z > x && z > y) {
        std::cout << "Второе число наибольшее";
    }
    else if (y > z && y > x) {
        std::cout << "Третье число наибольшее";
    }
    else {
        std::cout << "Наибольшие числа равны";
    }*/

    int x;
    std::cout << "Введите число\n";
    std::cin >> x;
    int rez = 1;
    for (int i = 1; i < x + 1; i++) {
        rez *= i;
    }
    std::cout << "Факториал = " << rez << "\n";
}

