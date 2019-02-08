#include<iostream>
#include"stack.cpp"
using namespace std;
//queue using two stacks

class queue{
public:
//two stacks.s1 is the base stack
stackLL s1;
stackLL s2;
node*end;
node*front;
//default constructor
queue(){
   end=s1.top;
   front=s1.top;
}

//insert at the top of queue.(insert at the top of s1)
void enqueue(int value){
   s1.push(value);
   end=s1.top;
   front=s1.top;
}

//deleting the last element from queue(from s1)
void dequeue(){
//insert the poped elements from s1 to s2(except the last element)
//reaching the last element
   while(s1.top->next!=NULL){
   s2.push(s1.top->data);
   s1.pop();}
//deleting the last element
   s1.pop();
//re-inserting all the elements from s2 to s1
   while(s2.top!=NULL){
   s1.push(s2.top->data);
   s2.pop();}
}
//checking whether the queue is empty
bool isempty(){
  s1.isempty(); 
}
//size of the queue
int size(){
  s1.size();
}
//display
void display(){
   s1.display();
}
};

//main function
int main(){
   queue Q1;
   for(int i=0;i<5;i++){
   Q1.enqueue(i);}
   Q1.display();
   Q1.dequeue();
   Q1.display();
   Q1.enqueue(9);
   Q1.display();
   Q1.isempty();
   Q1.size();
}





