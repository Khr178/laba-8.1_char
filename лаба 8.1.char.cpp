// Дано літерний рядок, який містить послідовність символів s0, …, sn, … .
// 1. Вияснити, чи є серед цих символів всі букви, що входять в слово “while”.
// 2. Замінити кожну групу букв “while” парою зірочок “ * *”.

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Include(const char* s, const char* cs)
{
    bool r = true;
    for (int i = 0; cs[i] != '\0'; i++)
        r = r && (strchr(s, cs[i]));
    
    return r;
}
int main()
{
    char s[10] = "while";
    char cs[] = "is";

    if (Include(s, cs))
        cout << "yes" << endl;
    else
        cout << "no" << endl;

    return 0;
}