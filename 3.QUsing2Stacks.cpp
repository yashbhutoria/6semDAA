#include<iostream>
using namespace std;

class Stack{
    int size;
    int *stack;

    public:
      int ptr;
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
                //cout << "\nUnderFlow!\n";
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


class Queue{
    Stack *s1, *s2;
    public:
        Queue(int n){
            s1 = new Stack(n);
            s2 = new Stack(n);
        }

        void enque(int n){
            s1->push(n);
        }

        int deque(){
            int br = 0;

            while ( s1->ptr > -1 ){
                br = s1->pop();
                s2->push(br);
            }

            return s2->pop();
        }

        void show(){
            int br = 0;
            cout << "\n------------------\n";
            while( br > -1){
                br = deque();
                if(br != -1){
                    cout << br << " ";
                }
            }
            cout << "\n------------------\n";
        }
};


int main(){
    Queue q(3);

    for (int i = 0; i < 3;i++){
        q.enque(i);
    }

    q.show();

    return 0;
}
