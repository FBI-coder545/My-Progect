#include <iostream>
#include <string>

int main() {
    std::string line;
    int chars = 0; int words = 0; int lines = 0;
    bool inWord = false;
    std::cout << "Введите текст:\n";
    while (std::getline(std::cin, line) and !line.empty()) {
        lines++;
        chars += line.length();
        for (char c : line) {
            if (c != ' ' and c != '\t') {
                if (!inWord) { 
                    words++; 
                    inWord = true; 
                }
            } else {
                inWord = false;
            }
        }
        inWord = false;
    }
    std::cout << "\nПолный результат вычислений\n";
    std::cout << "Всего строк: " << lines << "\n";
    std::cout << "Всего слов: " << words << "\n";
    std::cout << "Всего символов: " << chars << "\n";
    return 0;
}
