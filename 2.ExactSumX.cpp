#include<iostream>
#include<math.h>
using namespace std;

int contains(int arr[],int n,int num){
    int l = 0;
    int r = n ;
    int mid;
    while( l < r ){
        mid = (l + r) / 2;
        if (arr[mid] == num){
            return mid;
        } else if( num < arr[mid]){
            r = mid - 1;
        } else if( num > arr[mid]){
            l = mid + 1;
        }
    }
    return -1;
}

bool doesExistSum(int arr[],int n,int x){
    int i = 0, j = n - 1;
    int compliment = 0;
    for (int i = 0; i < n;i++){
        compliment = x - arr[i];
        int pos = contains(arr, n, compliment);
        if (pos > 0 && pos != i){
            cout <<"\n"<< arr[i] << "," << arr[pos]<<"\n";
            return true;
        }
    }
    return false;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 55, 66, 888, 999};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<( (doesExistSum(arr,n,8) == 1 )? "Yes" : "No");
}