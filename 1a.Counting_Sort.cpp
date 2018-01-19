#include<iostream>
using namespace std;
int main(){
    int n,range;
    cout<<"\nEnter Range of Input: ";
    cin>>range;
    cout<<"\nEnter Number of Inputs: ";
    cin>>n;

    //Parenthesis makes default values of arrays to zero
    int *freq = new int[range+1]();

    //Counting frequency
    int temp;
    cout<<"\nEnter Values:";
    for(int i=0;i<n;i++){
        cin>>temp;
        freq[temp]++;
    }

    //Printing sorted array
    for(int i=0;i<range;i++){
        for(int j=0;j<freq[i];j++){
            cout<<i;
        }
    }

    return 0;
}
