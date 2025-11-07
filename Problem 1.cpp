#include <iostream>

using namespace std;
int Sum_Upto_N(int Number,int Mult_Of_X);

int main()
{
    int T;
    cin >> T;
    cout << "Output:" << endl;
    while (T--)
    {
        int N;
        cin >> N;
        cout << Sum_Upto_N(N,3)<<endl;
    }
    return 0;
}



int Sum_Upto_N(int Number,int Mult_Of_X) {
    int Sum = 0;
    int N=Number;
    int X = Mult_Of_X;
    int Num_Count = (N/X);
    Sum = X*(Num_Count*(Num_Count+1))/2;
    return Sum;
}