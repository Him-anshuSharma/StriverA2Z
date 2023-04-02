#include<iostream>

using namespace std;

void insertion_sort(int* arr, int size){
    for(int k=0;k<size-1;k++){
        for(int i=k,j=k+1;(i<size-1 && j<size);i++,j++){
            if(arr[i]<arr[k]){
                continue;
            }
            else{
                int _i = i;
                int _j = j;
                while(arr[_i]>arr[_j] && _i>=0 && _j>=1){
                    int temp = arr[_i];
                    arr[_i] = arr[_j];
                    arr[_j] = temp;
                    _i--;
                    _j--;
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {123,24,35,46,442,423};
    insertion_sort(arr,6);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}
