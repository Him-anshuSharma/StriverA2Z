#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int size;
    cin >> size;
    int hash[25] = {0};
    int val;
    for(int i=0;i<size;i++){
        cin >> val;
        hash[val] += 1;
    }
    int query_count;
    cin >> query_count;
    int q;
    for(int i=0;i<query_count;i++){
        cin >> q;
        cout << hash[q] << endl;
    }  
    return 0;
}
