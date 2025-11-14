#include <iostream>

using namespace std;
int Largest_Mult_inSeries(int Serie_Size, int Multi_Size, const string &Serie);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int Serie_Size, Multi_Size;
        string Serie;
        cin >> Serie_Size >> Multi_Size >> Serie;

        cout << Largest_Mult_inSeries(Serie_Size, Multi_Size, Serie) << endl;
    }
    return 0;
}

int Multiplier(int Multi_Size, string Serie)
{
    int Mult = 1;
    for (int i = 0; i < Multi_Size; i++)
    {
        Mult *= (Serie.back() - '0');
        Serie.pop_back();
    }
    return Mult;
}

int Largest_Mult_inSeries(int Serie_Size, int Multi_Size, const string &Serie)
{
    int Max = 0;
    for (int i = 0; i < Serie_Size - Multi_Size + 1; i++)
    {
        int tmp = Multiplier(Multi_Size, Serie.substr(i, Multi_Size));
        if (Max < tmp)
        {
            Max = tmp;
        }
    }
    return Max;
}
