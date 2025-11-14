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
    for (int i = 3; i <= Number / 3; i++)
    {
        int j = i + 1, k = Number - i - j;
        while (j < k)
        {
            if (is_pythagorean(i, j, k))
            {
                Max = (Max < i * j * k) ? i * j * k : Max;
            }
            j++;
        }
    }
    return Max;
}