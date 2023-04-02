#include<iostream>

using namespace std;


void selection_sort(int* arr, int size){
    for(int i=0;i<size-1;i++){
        int min = i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {123,24,35,46,442,423};
    selection_sort(arr,6);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}
