#include<iostream>
#include<stack>
using namespace std; 

class Stack {
    public:
    int* arr;
    int top;
    int size;
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data){
        if(top < size-1){
            top++;
            arr[top]= data;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top >=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
    
};

int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    cout<<s.peek()<<endl;
    s.push(30);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    for(int i=0;i<2;i++){
        s.pop();
    }
    cout<<s.peek()<<endl;
}
