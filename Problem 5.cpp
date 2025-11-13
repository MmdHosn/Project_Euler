#include <iostream>
#include <vector>

using namespace std;

void Sieve_Erathosthenes(vector<int> &primes, int Max);

int LCM(const vector<int> &primes, int Number);

vector<int> prime;

int main()
{
    int T;
    cin >> T;
    cout << "Output:" << endl;
    Sieve_Erathosthenes(prime, 40);
    while (T--)
    {
        int N;
        cin >> N;
        cout << LCM(prime, N) << endl;
    }
    return 0;
}

void Sieve_Erathosthenes(vector<int> &primes, int Max)
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

            primes.push_back(i);
        }
    }
}

int LCM(const vector<int> &primes, int Number)
{
    int multiply = 1;
    for (int i : primes)
    {
        int tmp = Number;
        while (i <= tmp)
        {
            multiply *= i;
            tmp /= i;
        }
    }
    return multiply;
}