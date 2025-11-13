#include <iostream>

using namespace std;

long Sum_Squares_Diff(int N);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << Sum_Squares_Diff(N) << endl;
    }
    return 0;
}

//the formula is : square_of_sums(from a to z) - sum_of_squares(from a to z) = 2(z(y+x+..+b+a)+y(x+w+...+b+a)+...+c(b+a)+b(a))
long Sum_Squares_Diff(int N)
{
    long Sum = 0;
    for (long i = N; i > 1; i--)
    {
        Sum += ((i - 1) * i * i) / 2;
    }
    return 2 * Sum;
}
