#include <iostream>
#include <vector>

using namespace std;

void Sieve_Of_Eratosthenes(vector<int> &primes, int Max);
vector<int> prime;
int main()
{
    int T;
    cin >> T;
    Sieve_Of_Eratosthenes(prime, 104750);
    cout << "Output:" << endl;
    while (T--)
    {
        /*int N;
        cin >> N;
        cout << prime[N-1] << endl;*/
        cout << prime[T] << endl;
    }
    return 0;
}

void Sieve_Of_Eratosthenes(vector<int> &primes, int Max)
{
    int i1 = Max;
    vector<bool> is_prime(i1, true);
    for (int i = 2; i * i <= i1; i++)
    {
        if (is_prime[i])
        {
            for (int j = i * i; j <= i1; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= i1; i++)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
        }
    }
}