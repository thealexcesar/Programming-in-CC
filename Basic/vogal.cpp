#include <iostream>
#include <cstdio>
/**
 * A program to count vogals using in prompt user.
 * This can be done in a better way using hashing.
 */
using namespace std;
int main(void) 
{
    int a{}, e{}, i{}, o{}, u{};
    string s{};
    std::cout << "Type a word: ";
    std::cin >> s;

    int s_len = s.length();
    for (int i = 0; i < s_len; i++) {
        switch(s[i]) {
            case 'a' : a++; break;
            case 'e' : e++; break;
            case 'i' : i++; break;
            case 'o' : o++; break;
            case 'u' : u++; break;
        }
    }
    std::cout << "[a] = " << a << std::endl;
    std::cout << "[e] = " << e << std::endl;
    std::cout << "[i] = " << i << std::endl;
    std::cout << "[o] = " << o << std::endl;
    std::cout << "[u] = " << u << std::endl;
    return 0;
}