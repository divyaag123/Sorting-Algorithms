#include<iostream>
using namespace std;
void selection(int arr[]  , int  n);
int main(){
    int arr[] = {2,7,4,1,5,3};
    
    selection(arr ,6); 
    for(int i = 0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }   

}
void selection(int arr[]  , int  n){
    for(int i = 0 ; i<n-1 ; i++){
        int min = i;

    
    for(int j = i+1 ; j<n ; j++){
        if(arr[min] > arr[j] ){
            min = j;

        }
    }
            int temp = arr[i];
            arr[i] = arr[min ];
            arr[min] = temp;
        
    
    }

}