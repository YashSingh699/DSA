#include <iostream>
using namespace std;

int find_peak(int *arr,int n){
    //if one element is present
    if(n == 1){
        return 0;
    }
    
    //if first element is larger then print 
    if(arr[0] > arr[1]){
        return arr[0];
    }
    
    //if last element is larger then it second last then print
    if(arr[n-1] > arr[n-2]){
        return arr[n-1];
    }

    //check for every element in the context of its neighbour
    for(int i=1; i<n-1 ;i++){
         if(arr[i] >= arr[i-1] && arr[i] >= arr[i+1]){
            return arr[i];
         }
    }
    return 0;

}

int main()
{
    int arr[] =  { 1};
    int size = sizeof(arr)/sizeof(arr[0]);

    int n = find_peak(arr,size);

    if(n == 0){
        cout<<"No peak element is present ";
    }else{
        cout<<"Peak element is "<<n;
    }
    return 0;
}

/*
Time complexity: O(n) as we are doing only one traversal
Space complexity: O(1) as we are not using extra space other then the required

*/