#include<iostream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int size = s.length();
    int hash[26] = {0};
    for(int i=0;i<size;i++){
        hash[(int)(s[i]-'a')] += 1;
    }
    int query_count;
    cin >> query_count;
    char q;
    for(int i=0;i<query_count;i++){
        cin >> q;
        cout << hash[(int)(q-'a')] << endl;
    }  
    return 0;
}
