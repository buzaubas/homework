#include <iostream>
#include <string>

int main()
{
    setlocale(0, "rus");
    std::cout << "Преобразование десятичного числа в двоичное" << std::endl;
    std::cout << "Введите целое число от 0 до 255 и нажмите <Enter>" << std::endl;
    int n;
    std::cout << "->";
    std::cin >> n;
    int buf;
    int number = n;
    int org;
    int code[8];
    int i = 0;
    while (true) {
        org = n;
        n /= 2;
        buf = n * 2;
        if (org - buf == 0) {
            code[i] = 0;
            i++;
        }
        else if (n == 1 || n == 0) {
            if (org - buf == 0) {
                code[i] = 0;
                i++;
            }
            else {
                code[i] = 1;
                i++;
            }
            if (n == 1) {
                code[i] = 1; 
                i++;
                for (int k = 0; k <= 7 - i; k++) { code[i + k] = 0; }
                break;
            }
            else if (n == 0) {
                code[i] = 0; 
                i++;
                for (int k = 0; k <= 7 - i; k++) { code[i + k] = 0; }
                break;
            }
        }
        else {
            code[i] = 1;
            i++;
        }

    }

    std::cout << "Десятичному числу " << number << " соотвествет двоичное ";
    for (int j = 7; j >= 0; j--) { std::cout << code[j]; }
}
