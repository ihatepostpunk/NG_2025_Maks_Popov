#include <iostream>
#include <cctype>

using namespace std;

int main() {
    const char text[] = "Once upon a time, a curious cat wandered into a mysterious garden.";

    int vowelsLetter = 0;
    int nonvowelsLetter = 0;

    for (int index = 0; text[index] != '\0'; index++) {
        char symbol = text[index];

        if (isalpha(symbol)) {
            char lower = tolower(symbol);

            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowelsLetter++;
            } else {
                nonvowelsLetter++;
            }
        }
    }

    int total = vowelsLetter + nonvowelsLetter;
    cout << "Vowels: " << (double)vowelsLetter / total * 100 << "%" << endl;
    cout << "Consonants: " << (double)nonvowelsLetter / total * 100 << "%" << endl;

    return 0;
}
