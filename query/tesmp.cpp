#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
     string filename = "sample.txt"; 
    ifstream file(filename);

    if (!file.is_open()) {
        std::cerr << "Failed to open the file." << std::endl;
        return 1;
    }

    int lineCount = 0;
    int wordCount = 0;
    int charCount = 0;

    string line, word;

    while (getline(file, line)) {
        lineCount++;


        istringstream iss(line);
        while (iss >> word) {
            wordCount++;
            charCount += word.size();
        }
    }

    file.close();

    std::cout << "Number of lines in the file: " << lineCount << std::endl;
    std::cout << "Number of words in the file: " << wordCount << std::endl;
    std::cout << "Number of characters in the file: " << charCount << std::endl;

    return 0;
}
