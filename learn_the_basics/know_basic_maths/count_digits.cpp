#include<iostream>
using namespace std; 
int main(){
    int n = 0;
    cin >> n;
    int c = 0;
    while(n>0){
        n = n/10;
        c ++ ;
    }
    cout << c;
}