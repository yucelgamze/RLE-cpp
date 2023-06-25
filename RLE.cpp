#include <iostream>
#include <string>

std::string RLE(std::string str) {
    std::string compressed_str = "";
    int count = 1;
    char current_char = str[0];

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == current_char) {
            count++;
        } else {
            compressed_str += std::to_string(count) + current_char;
            count = 1;
            current_char = str[i];
        }
    }
    compressed_str += std::to_string(count) + current_char;

    return compressed_str;
}

int main() {
    std::string str = "AAAABBBCCDAA";
    std::string compressed_str = RLE(str);

    std::cout << "Original string: " << str << std::endl;
    std::cout << "Compressed string: " << compressed_str << std::endl;

    return 0;
}
//Run-length encoding (RLE) algoritması, ardışık tekrar eden karakterleri sıkıştırmak için kullanılan bir yöntemdir. 
//Örneğin, "AAAABBBCCDAA" dizisi RLE ile "4A3B2C1D2A" şekline dönüştürülebilir.
//Bu kod, önce sıkıştırılmak istenen diziyi alır ve ardından RLE algoritmasını uygular. 
//Ardışık tekrar eden karakterleri sayar ve sıkıştırılmış dizeye ekler.
