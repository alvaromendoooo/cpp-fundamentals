#include <iostream>
#include <string>

int main() {
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string name;
    std::string language;

    if (std::cin >> name >> language) {
        std::cout << "Hello, " << name << "!\n";
        std::cout << name << " is learning " << language << ".\n";
    }

    return 0;
}