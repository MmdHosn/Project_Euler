#include <iostream>

using namespace std;
int Biggest_Prime(int Number);
int main()
{
    int T;
    cin >> T;
    cout << "Output:" << endl;
    while (T--)
    {
        int N;
        cin >> N;
        cout << Biggest_Prime(N) << endl;
    }
    return 0;
}

int Biggest_Prime(int Number)
{
    for (int i = 2; i * i <= Number; i++)
    {
        while (Number % i == 0)
        {
            Number /= i;
        }
        if (Number == 1)
            return i;
    }
    return Number;
}