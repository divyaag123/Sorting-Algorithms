#include<iostream>
using namespace std;
void bubblesort(int arr[] , int n);
int main(){
    int arr[] = {2 , 5 , 3 ,4 , 7};
    bubblesort(arr ,5);
    for(int i= 0 ; i<5 ; i++){
        cout <<arr[i]<<" ";
    }

}
void bubblesort(int arr[] , int n){
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i ; j<n-i-1 ;j++)
        {
            if (arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
        
    
}