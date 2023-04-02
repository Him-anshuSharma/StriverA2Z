#include <iostream>

using namespace std;

int arr[] = {123, 24, 35, 46, 442, 423};
int sorted_arr[6];

void merge(int s, int m, int e)
{
    if(s == m && m == e){
        return;
    }
    int i = s, j = m + 1;
    while (i <= m && j <= e)
    {
        if (arr[i] < arr[j])
        {
            sorted_arr[i + j - m - 1] = arr[i];
            i++;
        }
        else if (arr[i] > arr[j])
        {
            sorted_arr[i + j - m - 1] = arr[j];
            j++;
        }
    }
    for(;i<=m;i++){
        sorted_arr[i + j - m-1] = arr[i];
    }
    for(;j<=e;j++){
        sorted_arr[i + j - m-1] = arr[j];
    }
    for(int i=s;i<=e;i++){
        arr[i] = sorted_arr[i];
    }
}

void merge_sort(int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = start + (end - start) / 2;
    merge_sort(start, mid);
    merge_sort(mid + 1, end);
    merge(start, mid, end);
}

int main(int argc, char const *argv[])
{
    merge_sort(0, 5);
    for (int i : sorted_arr)
    {
        cout << i << " ";
    }
    return 0;
}
