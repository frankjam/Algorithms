#include <iostream>
using namespace std;
int partation(int arr[],int start,int end){
    int pIndex,pivot;
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
partation(){
    if(s<e){
        
    }
    swap()
    return pIndex;
}

quicksort(array,start,end){
    if(start<end){
        p=partation()
        quicksort(arr,start,p-1)
        quicksort(arr,p+1,end)
    }
}
*/