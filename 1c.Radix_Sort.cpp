#include<iostream>
#include<string.h>
using namespace std;

void print(int arr[],int n,string str){
    cout << "\n-----------"<<str<<"-------------\n";
    for (int i = 0; i < n;i++)
        cout << arr[i] << " ";
    cout << "\n------------------------\n";
}

void countSort(int arr[],int n,int base){
    int count[10] = {0};
    int *out = new int[n]();

    for (int i = 0; i < n;i++){
        count[ (arr[i] / base)%10 ]++;
    }

    for (int i = 1; i < 10;i++){
        count[i] += count[i-1];
    }

    for (int i =  n-1 ; i >= 0 ; i--){
        int cur = (arr[i] / base) % 10;
        out[ count[cur] - 1 ] = arr[i];
        count[cur]--;
    }
    for (int i = 0; i < n;i++){
        arr[i] = out[i];
    }
}




void radixSort(int arr[],int n){
    int max = -1000000;
    for (int i = 0; i < n;i++){
        max = (max < arr[i]) ? arr[i] : max;
    }
    for (int base = 1 ; max / base > 0 ; base *= 10){
        countSort(arr, n, base);
    }
}

int main(){
    int arr[] = {710,415,75,4590,802,2454,2,4466};
    int n = sizeof(arr) / sizeof(arr[0]);
    radixSort(arr, n);
    print(arr, n,"final");
}