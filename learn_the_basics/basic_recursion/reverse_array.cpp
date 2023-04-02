#include<iostream>

using namespace std;


void rev_arr(int arr[],int s, int e){
    if(s>=e){
        return;
    }
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;
    rev_arr(arr,s+1,e-1);
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,23,34,35,54,5};
    rev_arr(arr,0,sizeof(arr)/sizeof(arr[0])-1);

    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++){
        cout << arr[i] << " ";
    }
    return 0;
}

