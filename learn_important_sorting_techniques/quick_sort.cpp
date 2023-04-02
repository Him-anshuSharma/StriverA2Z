#include<iostream>

using namespace std;

int arr[] = {12,1235,54,52,15,45,45,4,545,52};

int pivot(int s, int e){
    int i=s,j=e-1,p=e;
    while(i<j){
        while(arr[i]<arr[p] && i<j){
            i++;
        }
        while(arr[j]>arr[p] && i<j){
            j--;
        }
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp = arr[j];
    arr[j]=arr[p];
    arr[p]=temp;
    return j;
}


void quick_sort(int s, int e){
    int p = pivot(s,e);
    quick_sort(s,p-1);
    quick_sort(p+1,e);
}

int main(int argc, char const *argv[])
{
    
    quick_sort(0,sizeof(arr)/sizeof(arr[0])-1);
    for(int i:arr){
        cout << i << " ";
    }
    return 0;
}
