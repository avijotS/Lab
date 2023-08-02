#include<>



function binarySearch(int arr, int s, int e, int key){

    if(s>=e){
        return
    }

    int mid = s+e/2;

    if(key == arr[mid]){
        return mid;
    }
    if(key < arr[mid]){
        binarySearch(arr, s, mid-1, key)
    }
    if(key > arr[mid]){
        binarySearch(arr, mid+1, e)
    }
    return -1
}


int main(){

    int arr = [1,2,3,4,5];
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    sort(arr);

    int ans = binarySearch(arr,0,arr.length(), key)
    fprintf("%d", ans)
    return 0;
}
