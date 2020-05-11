#include <string>
#include <algorithm>
#include <iostream>

bool isPalindrome(const std::string& text) {

    if (equal(text.begin(), text.begin() + text.size() / 2, text.rbegin())) {
        return true;
    }
        return false;
}


int main() {

    std::cout << isPalindrome("Ala ma kota") << '\n';
    std::cout << isPalindrome("neveroddoreven") << '\n';

}
