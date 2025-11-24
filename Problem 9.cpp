#include <cmath>
#include <iostream>

using namespace std;

int pythagorean_triplet_Max(int Number);

int main()
{
    int T;
    cin >> T;
    cout << "Output:" << endl;
    while (T--)
    {
        int N;
        cin >> N;
        cout << pythagorean_triplet_Max(N) << endl;
    }
    return 0;
}
bool is_pythagorean(int a, int b, int c)
{
    if (a * a + b * b == c * c)
        return true;
    return false;
}

int pythagorean_triplet_Max(int Number)
{
    int Max = -1;
    // a + b + c = Number and abc = Max
    for (int i = 1; i <= Number / 3; i++)
    {
        for (int j = i + 1; i + j <= 2 * Number / 3; j++)
        {
            int k = Number - i - j;
            if (is_pythagorean(i, j, k) && Max < i * j * k)
                Max = i * j * k;
        }
    }
    return Max;
}