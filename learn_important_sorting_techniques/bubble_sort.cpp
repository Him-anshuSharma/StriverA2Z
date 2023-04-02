#include<iostream>

using namespace std;

void bubble_sort(int* arr,int size){
    for(int k=0;k<size;k++){
        for(int i=0,j=1;(i<(size-1) && j<size);i++,j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {123,24,35,46,442,423};
    bubble_sort(arr,6);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}
