#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter text" << endl;
    string text;
    getline(cin, text);
    int words = 0;
    bool inWord = false;

    for (char c : text) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            if (!inWord) {
                inWord = true;
                words++;
            }
        } else {
            inWord = false;
        }
    }

    cout << "Words: " << words << endl;
    return 0;
}

