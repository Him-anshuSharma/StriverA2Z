#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int N ,P,val;
    map<int, int> mp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> val;
        mp[val]++;
    }
    cin >> P;
    for (int i = 1; i <= P; i++)
    {
        cout << mp[i] << " ";
    }
    return 0;
}
