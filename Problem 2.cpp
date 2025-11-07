#include <iostream>

using namespace std;
long long Even_Fib_Adder(long long Upto_Fib_Num_Value);

int main()
{
    int T;
    cin >> T;
    cout << "Output:" << endl;
    while (T--)
    {
        long long N;
        cin >> N;
        cout << Even_Fib_Adder(N) << endl;
    }
    return 0;
}



long long Even_Fib_Adder(long long Upto_Fib_Num_Value) {
    long long Even_Fib_Sum = 0;
    long long Previous_Fib_Number = 0;
    long long Current_Fib_Number = 1;
    while(Current_Fib_Number <= Upto_Fib_Num_Value) {
        long long tmp = Current_Fib_Number;
        Current_Fib_Number += Previous_Fib_Number;
        Previous_Fib_Number = tmp;
        if (Previous_Fib_Number % 2 == 0) {
            Even_Fib_Sum += Previous_Fib_Number;
        }
    }
    return Even_Fib_Sum;
}