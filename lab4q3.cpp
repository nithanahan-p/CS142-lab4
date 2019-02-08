#include<iostream>
//including the queue 
#include"queue.cpp"
using namespace std;

class stack{
public:
//two queues.q1 is the base queue
queueLL q1;
queueLL q2;
node*top;
//default constructor
stack(){
top=q1.end;}

//inserting at the top of the stack(end of q1)
void push(int value){
   q1.endqueue(value);
   //changing the top
   top=q1.end;
}
//deleting at the top of the stack(end of q1)
void pop(){
	//inserting all the deleted elem from q1 to q2(except the last elem of q1)
	while(q1.front->next!=NULL){
		q2.endqueue(q1.front->data);
		q1.dequeue();
	}
	//deleting the last elem
	q1.dequeue();
	//re-inserting elem from q2 to q1
	while(q2.front!=NULL){
		q1.endqueue(q2.front->data);
		q2.dequeue();
	}
}
	
	
//checking whether the stack(q1) is empty
bool isempty(){
	q1.isempty();
}
//counting the no of elements in the stack(q1)
int size(){
	q1.size();
}
void display(){
   q1.display();
}
};

int main(){
   stack S1;
   for(int i=0;i<5;i++){
   S1.push(i);}
   S1.display();
   S1.isempty();
   S1.size();
   S1.pop();
}
   

