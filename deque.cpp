#include<iostream>
 using namespace std;
 class deque
 {
 private:
    /* data */
 public:
int *arr;
int size,front,rear;
deque(int size)
{
    this->size=size;
    arr=new int[size];
    front=rear=-1;
}
void pushrear(int data)
{
if(front==0&& rear==size-1)
{
    cout<<"\n queue is full";
    return;
}
else if(front==-1)
{
    front=rear=0;
    arr[front]=data;
}
else if(rear==size-1 && front!=0)
{
rear=0;
arr[rear]=data;
}
else {
    rear++;
    arr[rear]=data;
}
}
void pushfront(int data)
{
if(front==0&& rear==size-1)
{
    cout<<"\n queue is full";
    return;
}
else if(front==-1)
{
    front=rear=0;
    arr[front]= data;
}
else if(rear!=size-1 && front==0)
{
rear=0;
arr[front]= data;
}
else {
    front--;
    arr[front]=data;
}
}
void popfront()
{
    if(front==-1){
        cout<<"empty queue";
     }
     else if(front==rear){
        arr[front]=-1;
        front=rear=-1;

     }
     else if (front==size-1)
     {  arr[front]=-1;
        front=0;
        /* code */
     }
     else{  arr[front]=-1;
        front++;
     }
   

     }
     void poprear()
     {
        if(front==-1){
        cout<<"empty queue";
     }
     else if(front==rear){
        arr[front]=-1;
        front=rear=-1;

     }
     else if (rear==0)
     {arr[rear]=-1;
       rear=size-1;
        /* code */
     }
     else{
        arr[rear]=-1;
       rear--;
     }
     
     }

void print(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
 };
 int main(){
    deque q(10);

    q.pushrear(10);
    q.pushrear(20);
    q.pushrear(30);
    q.pushrear(40);
    q.pushrear(50);
    q.pushrear(60);
    q.pushrear(70);
    q.pushrear(80);
    q.pushrear(90);
q.print();
cout<<endl;
    q.poprear();
q.print();
 }
 
 
 