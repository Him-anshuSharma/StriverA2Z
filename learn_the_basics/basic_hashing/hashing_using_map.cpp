#include<iostream>
#include<map>
using namespace std;
int main(int argc, char const *argv[])
{
    map<int,int> mp;
    int size;
    cin >> size;
    int val;
    for(int i=0;i<size;i++){
        cin >> val;
        mp[val]++;
    }

    int query_count;
    cin >> query_count;
    int q;
    for(int i=0;i<query_count;i++){
        cin >> q;
        cout << mp[q] << endl;
    }  
    return 0;
}
