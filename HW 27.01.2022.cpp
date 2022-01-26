#include <iostream>
#include <string>

int main()
{
    setlocale(0, "rus");
    std::cout << "Введите температуру воздуха: " << std::endl;
    std::string day[7] = { "Понедельник", "Вторник", "Среда", "Четверг", "Пятница", "Суббота", "Воскресенье" };
    float value[7];
    for (int i = 0; i < 7; i++) {
        std::cout << day[i] << "-> ";
        std::cin >> value[i];
    }
    std::cout << "---------------------------" << std::endl;
    float avg = 0;
    for (int i = 0; i < 7; i++) {
        avg += value[i];
    }
    avg /= 7;
    std::cout << "Средняя температура за неделю: " << avg << " град.";
}
