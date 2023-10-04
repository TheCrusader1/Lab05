#include <iostream>
#include <vector>
#include <string>


char Cypher(char c, std::vector<char>& Table) {
    if (c >= 65 && c <= 90) {
        // Uppercase letter
        return Table[c - 65];
    }
    else if (c >= 97 && c <= 122) {
        // Lowercase letter
        char upperCaseLetter = c - 32; // Convert to uppercase
        char upperCaseCode = Table[upperCaseLetter - 65];
        return upperCaseCode + 32; // Convert back to lowercase
    }
    else {
        // Not a letter, return as is
        return c;
    }
}

int main() {
    std::vector<char> Table = { 
        'V','F','X','B','L','I','T','Z','J','R','P','H','D','K','N','O','W','S','G','U','Y','Q','M','A','C','E' 
    };

    std::cout << "Input text to cypher: ";
    std::string text;
    std::getline(std::cin, text);

    std::string encodedString;
    for (char c : text) {
        encodedString += Cypher(c, Table);
    }

    std::cout << "Encoded Message: " << encodedString << std::endl;

    return 0;
}
