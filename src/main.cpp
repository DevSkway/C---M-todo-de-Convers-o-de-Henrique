// Método de Henrique

#include <iostream>
#include <regex>

bool isBinary(const std::string& Binary) {
    std::regex regexMatch("^[01]+$");
    return std::regex_match(Binary, regexMatch);
}

int ConvertToDecimal(const std::string& Binary) {
    if (!isBinary(Binary)) {
        throw std::invalid_argument(Binary + " is not a valid binary string.");
    }

    unsigned int result {0};

    for (char bit : Binary) {
        result *= 2;
        
        if (bit == '1') {
            result++;
        }
    }

    return result;
}

int main() {
    std::string Binary {"10101011101010101001101110101010111001"};
    
    std::cout << "Binario: " << Binary << '\n';
    std::cout << "Decimal: " << ConvertToDecimal(Binary) << '\n'; 
}
