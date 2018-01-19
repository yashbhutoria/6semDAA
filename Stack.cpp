#include<iostream>
using namespace std;

class Stack{
    int size;
    int *stack;
    int ptr;

    public:
      Stack(int n){
        size = n;
        stack = new int[size]();
        ptr = -1;
      }

      void push(int x)
      {
          if (ptr == size - 1)
          {
              cout << "\nOverFlow!\n";
          }
          else
          {
              ptr++;
              stack[ptr] = x;
          }
        }

        int pop(){
            int ret;
            if( ptr < 0 ){
                cout << "\nUnderFlow!\n";
                ret = -1;
            }else{
                ret = stack[ptr];
                ptr--;
            }
            return ret;
        }

        void show(){
            for (int i = ptr; i >= 0;i--){
                cout<<"\n"<< stack[i];
            }
        }

};


int main(){
    Stack s1(3);
    int ch = 3;
    while(ch!=4){
        cout << "\n1.Push\n2.Pop\n3.Show\n4.Exit\n: ";
        cin>>ch;
        switch(ch){
            case 1:{
                cout << "\nEnter Element: ";
                int x;
                cin >> x;
                s1.push(x);
                break;
            }
            case 2:{
                cout << "\nElement poped: " << s1.pop();
                break;
            }

            case 3:{
                cout << "\n-----------\n";
                s1.show();
                cout << "\n-----------\n";
                break;
            }
            case 4:
                break;
            default:{
                cout << "Invalid Choice";
                break;
            }
        }
    }
    return 0;
}
