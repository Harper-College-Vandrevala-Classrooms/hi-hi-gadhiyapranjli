#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int strcmp_case_insensitive(const char* str1, const char* str2) {
    while (*str1 && *str2) {
        char c1 = tolower(static_cast<unsigned char>(*str1));
        char c2 = tolower(static_cast<unsigned char>(*str2));
        
        if (c1 < c2)
        return -1;
        if (c1 > c2) 
        return 1;
        ++str1;
        ++str2;
    }
    return (*str1 == '\0' && *str2 == '\0') ? 0 : (*str1 ? 1 : -1);
}

void compar(const char* str1, const char* str2) {
    int result = strcmp_case_insensitive(str1, str2);
    cout << "The comparison of \"" << str1 << "\" and \"" << str2 
              << "\" returns " << result << ".\n";
}

int main() {
    compar("string one", "string two");  
    compar("string one", "string one");
    compar("string two", "string one");  

    return 0;
}