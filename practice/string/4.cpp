#include <bits/stdc++.h>
using namespace std;

int checkVowel(char it)
{
    if (it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u')
    {

        return 1;
    }
    else
        return 0;
}

int main()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);

    int ch1 = 0, ch2 = 0, ch3 = 0;

    for (auto &it : a)
    {

        if (checkVowel(it))
        {
            ch1++;
        }
    }
    for (auto &it : b)
    {
        if (checkVowel(it))
        {
            ch2++;
        }
    }
    for (auto &it : c)
    {
        if (checkVowel(it))
        {
            ch3++;
        }
    }

    if (ch1 == 5 && ch2 == 7 && ch3 == 5)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}