#include <iostream>
#include <locale>

using namespace std;

int main() {
    setlocale(LC_ALL, "");

    const wchar_t text[] = L"Вот у меня появился вопрос, ответ на который меня очень сильно тревожит: а можете ли вы вывести мне на экран соотношение гласных букв  к негласным? Сколько процентов в тексте занимают гласные символы, а сколько негласные?";

    int vowelsLetter = 0;
    int nonvowelsLetter = 0;

    for (int index = 0; text[index] != L'\0'; index++) {
        wchar_t symbol = text[index];

        if (symbol >= L'А' && symbol <= L'Я') symbol += L'а' - L'А';

        if (symbol >= L'а' && symbol <= L'я') {
            if (symbol == L'а' || symbol == L'е' || symbol == L'ё' || symbol == L'и' ||
                symbol == L'о' || symbol == L'у' || symbol == L'ы' || symbol == L'э' ||
                symbol == L'ю' || symbol == L'я') {
                vowelsLetter++;
            } else {
                nonvowelsLetter++;
            }
        }
    }

    int total = vowelsLetter + nonvowelsLetter;
    wcout << L"Vowels: " << (double)vowelsLetter / total * 100 << L"%" << endl;
    wcout << L"Non-vowels: " << (double)nonvowelsLetter / total * 100 << L"%" << endl;

    return 0;
}
