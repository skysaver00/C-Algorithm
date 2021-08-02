#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int Arr[1000001];
int Index_Arr[1000001];
vector<int> V;
vector<int> Answer;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> Arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (V.size() == 0 || V[V.size() - 1] < Arr[i])
        {
            V.push_back(Arr[i]);
            Index_Arr[i] = V.size() - 1;
        }
        else
        {
            int Left = 0;
            int Right = V.size() - 1;
            while (Left < Right)
            {
                int Mid = (Left + Right) / 2;

                if (V[Mid] >= Arr[i]) Right = Mid;
                else Left = Mid + 1;
            }
            V[Left] = Arr[i];
            Index_Arr[i] = Left;
        }
    }
    cout << V.size() << "\n";
    
    int Find_Index = V.size() - 1;
    for (int i = N; i > 0; i--)
    {
        if (Index_Arr[i] == Find_Index)
        {
            Find_Index--;
            Answer.push_back(Arr[i]);
        }
    }
    for (int i = Answer.size() - 1; i >= 0; i--) cout << Answer[i] << " ";
    cout << "\n";

    return 0;
}