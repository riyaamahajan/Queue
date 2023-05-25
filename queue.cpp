#include<iostream>
using namespace std;
class Queue{
public:
int *arr;
int size;
int front;
int rear;
Queue(int size)
{
    this->size=size;
    arr=new int[size];
    front=rear=0;
}
void push(int data)
{
if(rear==size)
{
    cout<<"Q full \n";
}
else{
    arr[rear]=data;
    rear++;
}
}
void pop(){
    if(front==rear)
    {
        cout<<"Q empty \n";
    }
    else{
        arr[front]=-1;
        front++;
        if(front==rear)
        {
            front=rear=0;
        }
    }
}
int getfront(){
    if(front==rear){
        cout<<"empptyyyy";
        return -1;
    }
    else{
        return arr[front];
    }
}
bool isempty()
{
    if(front==rear){
        return true;

    }
    else{
        return false;
    }
}

};
int main(){
    Queue q(10);
    q.push(5);
//       q.push(15);
//         q.push(25);
//           q.push(35);
// 
cout<<"front="<<q.getfront();
}