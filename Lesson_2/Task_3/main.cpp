#include <iostream>

using namespace std;

int main() {
    const char text[] = "Once upon a time, a curious cat wandered into a mysterious garden.";

    int vowelsLetter = 0;
    int nonvowelsLetter = 0;

    for (int index = 0; text[index] != '\0'; index++) {
        char symbol = text[index];

        bool isLetter = (symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z');

        if (isLetter) {
            if (symbol == 'A' || symbol == 'E' || symbol == 'I' || symbol == 'O' || symbol == 'U' ||
                symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u') {
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
