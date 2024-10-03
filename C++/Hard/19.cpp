#include <iostream>
#include <fstream>

void writeFile() {
    std::ofstream file;
    file.open("example.txt");
    file << "Writing some data." << std::endl;

}

void readFile() {
    std::ifstream file;
    file.open("example.txt");
    
    if (!file.is_open()) {
        std::cout << "Failed to open file." << std::endl;
        return;
    }

    std::string content;
    while (file >> content) {
        std::cout << content << std::endl;
    }

    
}

int main() {
    writeFile();
    readFile();
    return 0;
}
