#include <iostream>

int ConvertToDecimal(unsigned int& Binary) {
    const std::string& BinaryString = std::to_string(Binary);
    unsigned int result {0};

    for (int Index = 0; Index <= BinaryString.length(); Index++) {
        switch (BinaryString[Index]) {
            case '0': {
                result *= 2;
            }

            case '1': {
                result *= 2;
                result++;
            }
        }
    }
}

int main() {
    unsigned int Binary = 101;
    
    std::cout << ConvertToDecimal(Binary);
}
