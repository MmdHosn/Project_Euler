#include <iostream>

using namespace std;

double Sum_Upto_N(int Number, int Mult_Of_X);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        double Final_Sum = Sum_Upto_N(N-1,3)+Sum_Upto_N(N-1,5)-Sum_Upto_N(N-1,15);
        cout << Final_Sum <<endl;
    }
    return 0;
}


double Sum_Upto_N(int Number, int Mult_Of_X) {
    double Sum = 0;
    int N=Number;
    int X = Mult_Of_X;
    int Num_Count = (N/X);
    Sum = X*(Num_Count*(Num_Count+1))/2;
    return Sum;
}