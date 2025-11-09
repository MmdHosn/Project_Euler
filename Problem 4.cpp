#include <iostream>

using namespace std;

// checks whether Input is a 6-Digit Palindrome Number
bool Is_6Digit_Palindrome(int Number);
// checks whether Input is Multiply of two 3-Digit Numbers
bool Is_Mult_Two_3Digit(int Number);
// Finds biggest Palindrome Number that is multiple of two 3-Digit numbers
int Biggest_Palindrome(int Number);

int main()
{
    int T;
    cin >> T;
    cout << " Output:" << endl;
    while (T--)
    {
        int N;
        cin >> N;
        cout << (Is_Mult_Two_3Digit(N) ? "true" : "false") << endl;
    }
    return 0;
}

bool Is_6Digit_Palindrome(int Number)
{
    if (99999 < Number && Number < 1000000)
    {
        int First_3Digits_Inverse = 0;
        int Second_3Digits = Number;
        for (int i = 0; i < 3; i++)
        {
            int tmp = Second_3Digits % 10;
            Second_3Digits /= 10;
            First_3Digits_Inverse *= 10;
            First_3Digits_Inverse += tmp;
        }
        if (First_3Digits_Inverse == Second_3Digits)
            return true;
    }
    return false;
}

bool Is_Mult_Two_3Digit(int Number)
{
    for (int i = 282; i < 1000; i++)
    {
        int Num_Mod_i = Number % i;
        int Num_div_i = Number / i;
        if (Num_Mod_i == 0 && 100 < Num_div_i && Num_div_i < 1000)
        {
            return true;
        }
    }
    return false;
}