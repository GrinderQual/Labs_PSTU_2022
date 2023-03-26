


#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "RUS");

    string s;

    getline(cin, s);


    int count = s.size();
    int n1 = 0;
    int n2 = 0;


    int* pcount = &count;

    const char* ps = s.c_str();
    for (int i = 0; i < count; i++) {

        if (*ps == 'А') { // Пытался двумя ифами, чёт ошибка вылетала
            n1++;
        }
        if (*ps == 'а') {
            n1++;
        }
        if (*ps == 'О') {
            n1++;
        }
        if (*ps == 'о') {
            n1++;
        }
        if (*ps == 'У') {
            n1++;
        }
        if (*ps == 'у') {
            n1++;
        }
        if (*ps == 'Э') {
            n1++;
        }
        if (*ps == 'э') {
            n1++;
        }
        if (*ps == 'Е') {
            n1++;
        }
        if (*ps == 'е') {
            n1++;
        }
        if (*ps == 'Ё') {
            n1++;
        }
        if (*ps == 'ё') {
            n1++;
        }
        if (*ps == 'Ы') {
            n1++;
        }
        if (*ps == 'ы') {
            n1++;
        }
        if (*ps == 'И') {
            n1++;
        }
        if (*ps == 'и') {
            n1++;
        }
        if (*ps == 'Я') {
            n1++;
        }
        if (*ps == 'я') {
            n1++;
        }
        if (*ps == 'Ю') {
            n1++;
        }
        if (*ps == 'ю') {
            n1++;
        }

        if (*ps == 'Й') {
            n2++;
        }
        if (*ps == 'Й') {
            n2++;
        }
        if (*ps == 'Ц') {
            n2++;
        }
        if (*ps == 'ц') {
            n2++;
        }
        if (*ps == 'К') {
            n2++;
        }
        if (*ps == 'к') {
            n2++;
        }
        if (*ps == 'Н') {
            n2++;
        }
        if (*ps == 'н') {
            n2++;
        }
        if (*ps == 'Г') {
            n2++;
        }
        if (*ps == 'г') {
            n2++;
        }
        if (*ps == 'Ш') {
            n2++;
        }
        if (*ps == 'ш') {
            n2++;
        }
        if (*ps == 'Щ') {
            n2++;
        }
        if (*ps == 'щ') {
            n2++;
        }
        if (*ps == 'З') {
            n2++;
        }
        if (*ps == 'з') {
            n2++;
        }
        if (*ps == 'Х') {
            n2++;
        }
        if (*ps == 'х') {
            n2++;
        }
        if (*ps == 'Ф') {
            n2++;
        }
        if (*ps == 'ф') {
            n2++;
        }
        if (*ps == 'В') {
            n2++;
        }
        if (*ps == 'в') {
            n2++;
        }
        if (*ps == 'П') {
            n2++;
        }
        if (*ps == 'п') {
            n2++;
        }
        if (*ps == 'Р') {
            n2++;
        }
        if (*ps == 'р') {
            n2++;
        }
        if (*ps == 'Л') {
            n2++;
        }
        if (*ps == 'л') {
            n2++;
        }
        if (*ps == 'Д') {
            n2++;
        }
        if (*ps == 'д') {
            n2++;
        }
        if (*ps == 'Ж') {
            n2++;
        }
        if (*ps == 'ж') {
            n2++;
        }
        if (*ps == 'Ч') {
            n2++;
        }
        if (*ps == 'ч') {
            n2++;
        }
        if (*ps == 'С') {
            n2++;
        }
        if (*ps == 'с') {
            n2++;
        }
        if (*ps == 'М') {
            n2++;
        }
        if (*ps == 'м') {
            n2++;
        }
        if (*ps == 'Т') {
            n2++;
        }
        if (*ps == 'т') {
            n2++;
        }
        if (*ps == 'Ь') {
            n2++;
        }
        if (*ps == 'ь') {
            n2++;
        }
        if (*ps == 'Б') {
            n2++;
        }
        if (*ps == 'б') {
            n2++;
        }
        ps++;
    }

    cout << "Гласных: " << n1 << endl;
    cout << "Согласных: " << n2 << endl;
    return 0;
}
    
    return 0;
}