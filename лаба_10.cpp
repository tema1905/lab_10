#include <iostream>
#include <map>
#include <string>
#include<Windows.h>

using namespace std;


int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Rus");

    map <string, string> capitals;
    capitals["Москва"] = "Россия";
    capitals["Вашингтон"] = "США";
    capitals["Берлин"] = "Германия";
    capitals["Минск"] = "Беларусь";
    capitals["Киев"] = "Украина";
    capitals["Осло"] = "Норвегия";
    capitals["Пекин"] = "Китай";
    capitals["Токио"] = "Япония";
    capitals["Мехико"] = "Мексика";
    capitals["Бразилиа"] = "Бразилия";

    map<string, string> countries; // Возможность найти столицу по стране
    for (const auto& pair : capitals) {
        countries[pair.second] = pair.first;
    }

    cout << "Приветствуем Вас в нашей программе!" << '\n' <<
        "Для поиска страны или её столицы необходимо написать название на русском языке и с заглавной буквы!" << '\n' <<
        "В противном случае программа не будет работать!" << '\n' << '\n';

    while (true)
    {
        string slovo;
        cout << "Введите государство или его столицу: ";
        cin >> slovo;
        if (capitals.find(slovo) != capitals.end()) {
            cout << "Страна: " << capitals[slovo] << endl;
        }
        
        else if (countries.find(slovo) != countries.end()) {
            cout << "Столица: " << countries[slovo] << endl;
        }
        else {
            cout << "Данное государство или его столица отсутствует в словаре. Попробуйте ещё раз!" << endl;
            continue;
        }

        return 0;
    }
   
}