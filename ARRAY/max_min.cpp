#include<bits/stdc++.h>
using namespace std;

struct Pair {
   int max;
   int min;
};

void sort(int arr[],int size)
{
    int temp;

    for(int i=0;i<size-1;i++)
    {
       for(int j=0;j<size;j++){
         
        if(arr[i] > arr[j+1]){
             temp = arr[i];
             arr[i] = arr[j+1];
             arr[j+1] = temp;
        }
       }
    }
}

Pair get_minmax(int arr[],int size)
{
    Pair minmax;
    
    sort(arr,size);
    
    minmax.min = arr[0];
    minmax.max = arr[size-1];
    
    return minmax;
}

int main()
{
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int size = sizeof(arr)/sizeof(arr[0]);

    Pair minmax = get_minmax(arr,size);

    cout<<"Maximum: "<<minmax.max<<endl<<"Minimum: "<<minmax.min;

    return 0;
}