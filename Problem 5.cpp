#include <iostream>
#include <vector>

using namespace std;

void Sieve_Erathosthenes(vector<int> &prime, int Max);

int main()
{
    int T;
    cin >> T;
    cout << "Output:" << endl;
    vector<int> prime;
    Sieve_Erathosthenes(prime, 300);
    for (auto i : prime)
    {
        cout << i << endl;
    }
    while (T--)
    {
        int N;
        cin >> N;
        cout << N << endl;
    }
    return 0;
}

void Sieve_Erathosthenes(vector<int> &prime, int Max)
{
    vector<bool> isPrime(Max + 1, true);

    for (int i = 2; i * i <= Max; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= Max; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    for (int i = 2; i <= Max; i++)
    {

        if (isPrime[i])
        {

            prime.push_back(i);
        }
    }
}
