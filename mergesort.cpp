#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void mergesort(int A[] );
void merge(int L[] , int R[] , int A[]);
int main(){
    int arr [] = { 3, 5 ,6, 2, 4,};
    mergesort(arr );
    for (int i = 0 ; i<5; i++){
        cout<<arr[i]<<" ";
    }
}
void mergesort(int A[] ){
    int n = 5;
    if(n<2)
        return;
    int mid = n/2;
    int left[mid];
    int right[n-mid];
    for(int i =0 ; i<mid ; i++){
        left[i] = A[i];
    }
    for(int j =mid ; j<n;j++){
        right[j-mid] = A[j];
    }
    mergesort(left);
    mergesort(right);
    merge(right , left , A);

    return;





}
void merge(int L[] , int R[] , int A[]){
     int nL = sizeof(L[0]);
     int nR = sizeof(R[0]);
     int i , j , k =0;
     while(i<nL && j<nR){
        if(L[i] <= R[j]){
            A[k] = L[i];
            
            i= i+1;
        }
        else {
            A[k] = R[j];
            j =j+1;
        }
        k = k+1;
     }
     while(i<nL){
        A[k] = L[i];
        i = i+1;
        k = k+1;
     }
     while(j<nR){
        A[k] = R[j];
        j =j+1;
        k = k+1;
     }

    
    

}