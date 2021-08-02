#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int N;
int arr[1000001];
int idx[1000001];
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
        cin >> arr[i];
    }

    for (int i = 1; i <= N; i++)
    {
        if (V.size() == 0 || V[V.size() - 1] < arr[i])
        {
            V.push_back(arr[i]);
            idx[i] = V.size() - 1;
        }
        else
        {
            int left = 0;
            int right = V.size() - 1;
            while (left < right)
            {
                int mid = (left + right) / 2;

                if (V[mid] >= arr[i]) right = mid;
                else left = mid + 1;
            }
            V[left] = arr[i];
            idx[i] = left;
        }
    }
    cout << V.size() << "\n";

    int Find_Index = V.size() - 1;
    for (int i = N; i > 0; i--)
    {
        if (idx[i] == Find_Index)
        {
            Find_Index--;
            Answer.push_back(arr[i]);
        }
    }
    for (int i = Answer.size() - 1; i >= 0; i--) cout << Answer[i] << " ";
    cout << "\n";

    return 0;
}