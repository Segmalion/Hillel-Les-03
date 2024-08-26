#include <iostream>

using namespace std;

int main()
{
    // завдання 1-2
    unsigned short myAge;        // Мій Вік
    float backYardArea;          // Площа Заднього Двору
    double numberStarInGalaxy;   // Зірок У Галактиці
    float averageRainFailMounth; // Середньомісячний Рівень Опадів
    // завдання 3
    const float pi = 3.14159;    // Rонстанта для числа рі
    // завдання 4
    float a = pi;

    myAge = 33;
    backYardArea = 68.123;
    numberStarInGalaxy = 200000000000;
    averageRainFailMounth = 85.6;
    cout << "myAge: " << myAge << endl;
    cout << "backYardArea: " << backYardArea << endl;
    cout << "numberStarInGalaxy: " << numberStarInGalaxy << endl;
    cout << "averageRainFailMounth: " << averageRainFailMounth << endl;
    cout << endl;
    cout << "pi - " << pi << endl;
    cout << "a  - " << a << endl;
    return 0;
}
