#include<iostream>
using namespace std;
void insertionsort(int arr[] , int n );
int main(){
    int arr [] = {2, 5, 3,7 ,4};
    insertionsort(arr ,5 );
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";

    }

}
void insertionsort(int arr[] , int n ){
    for(int i = 1 ; i< n ; i++){
        int value = arr[i];
        int hole = i;
        while(hole>0 && arr[hole-1] >value){
            arr[hole] = arr[hole-1];
            hole = hole -1 ; 


        }
         arr[hole] = value ; 
    }
}
