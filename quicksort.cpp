#include <iostream>
using namespace std;
int partation(int arr[],int start,int end){
        
    int pivot = arr[end];
    int pIndex = start;
    
    for(int i = start; i<end; i++){
        if(arr[i]<pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }
    
    int temp = arr[end];
    arr[end] = arr[pIndex];
    arr[pIndex] = temp;
    
    return pIndex;
}

void quicksort(int arr[],int start, int end){
    if(start<end){
        int p = partation(arr,start,end);
        quicksort(arr,start,(p-1));
        quicksort(arr,(p+1), end);
    }
}
int main(){
    int siz;
    cout << "Enter array size";
    cin>>siz;
    int arr[siz];
    cout << "Enter the numbers ";
    for (int i=0; i<siz; i++){
        cin>>arr[i];
    }
    quicksort(arr,0,siz-1);
    return 0;
}
/*
Time Complexity: θ(nlog(n))
Space Complexity: O(log(n))

    The pseudocode flow 
    
partation(arr[],start,end){
    pivot=arr[end]
    pIndex=start
    for(i=start to end-1){
        if(arr[i]<=pivot){
            swap(arr[i],arr[pIndex])
            pIndex++
        }
    }
    swap(arr[e],arr[pIndex])
    return pIndex;
}

quicksort(array,start,end){
    if(start<end){
        p=partation(arr[],start,end)
        quicksort(arr,start,p-1)
        quicksort(arr,p+1,end)
    }
}
*/