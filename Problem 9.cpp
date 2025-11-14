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
        cout << N << endl;
    }
    return 0;
}

int pythagorean_triplet_Max(int Number)
{
    int Max = 0;
    for (int i = 3; i <= Number / 3; i++)
    {
        int j = i + 1, k = Number - i - j;
        while (j < k)
        {
            if (is_pythagorean(i, j, k))
            {
                Max = (Max<i*j*k)? i * j * k : Max;
            }
        }
    }
    return Max;
}
