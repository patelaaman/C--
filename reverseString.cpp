#include <iostream>
#include <algorithm>

int main() {
    std::string str = "we ojk sdsos";

    // First reverse
    std::reverse(str.begin(), str.end());

    // Output the first reversed string
    std::cout << "First Reversed string: " << str << std::endl;

    // Second reverse
    std::reverse(str.begin(), str.end());

    // Output the second reversed string
    std::cout << "Second Reversed string: " << str << std::endl;

    return 0;
}
