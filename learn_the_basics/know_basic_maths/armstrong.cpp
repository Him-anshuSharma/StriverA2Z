#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int temp;
    cin >> temp;
    int x = temp;
    int sum = 0;
    while(x>0){
        cout << "pow: " << pow((x%10),3);
        sum = sum + pow((x%10),3);
        cout << "\t sum: " << sum << endl;
        x = x/10;
    }
    if(temp == sum)
        cout << "true";
    else
        cout << "false";
}