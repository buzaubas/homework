#include <iostream>

using namespace std;

char* space_tab(char* s)
{
    int count{ 0 };
    while (s[count] != '\0')
    {
        if (s[count] == ' ')
        {
            s[count] = '\t';
        }
        count++;
    }
    return s;
}

void count(char* s)
{
    int l{ 0 }, n{ 0 }, o{ 0 };
    int i{ 0 };
    while (s[i] != '\0')
    {
        if (((s[i] >= 'a') && (s[i] <= 'z')) || ((s[i] >= 'A') && (s[i] <= 'Z'))) {
            // буква латиницы
            l++;
            i++;
        }
        else if ((s[i] >= '0') && (s[i] <= '9')) {
            // цифра
            n++;
            i++;
        }
        else if (s[i] >= 0x20) {
            // другой символ, кроме служебных
            o++;
            i++;
        }
    }
    std::cout << "Labels number: " << l << std::endl;
    std::cout << "Numbers number: " << n << std::endl;
    std::cout << "Other symbols number: " << o << std::endl;
}

int word_count(char* s)
{
    int i{ 0 }, space{ 0 };
    while (s[i] != '\0')
    {
        if (s[i] == ' ')
        {
            space++;
        }
        i++;
    }
    return space + 1;
}

const char* russian()
{
    const char* str = "Русское предложение";
    return str;
}

int vowels(char* s)
{
    char vowels[] = "еыаоэяию";
    int num_vowels{ 0 };
    for (auto i = 0; i < strlen(s); i++)
    {
        for (auto j = 0; j < strlen(vowels); j++)
        {
            if (s[i] == vowels[j])
            {
                num_vowels++;
            }
        }
    }
    return num_vowels;
}

void palindrom(char* x)
{
    string s;       // Строка
    char buf[250];  // Для ввода с пробелами
    string k;       // Слово

    
    s = x;

    for (int j = 0; j < s.length(); j++)
    {
        if (s[j] != ' ')
        {
            k += s[j];
        }
        else
        {
            for (int i = 0; i < k.length(); i++)
            {
                if (k[i] != k[k.length() - i - 1])
                {
                    cout << "слово " << k << " не полиндром.." << endl;
                }
                else
                {
                    cout << "слово " << k << " полиндром" << endl;
                }
                k = "";
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    const int BUFF_SIZE = 512;
    char* buffer = new char[BUFF_SIZE];

    std::cin.getline(buffer, BUFF_SIZE);

    /*std::cout << space_tab(buffer) << std::endl;*/
    count(buffer);
}
