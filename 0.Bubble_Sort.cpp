#include<iostream>
using namespace std;
int main(){

    int a[] = {10,9,8,7,6,5,4,3,2,1};
    int temp;
    for(int i=0;i<10;i++){
        for(int j=0;j<i+1;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout<<a[i]<<"_";
    }

    return 0;
}
