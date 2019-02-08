#include<iostream>
#include "nm.cpp"     //copy all the ll 
class queueLL{
    public:
    node*end;
    node*front;
    linkedlist l1;
queueLL(){
  end=l1.head;
  front=l1.head;
}
void endqueue(int value){
//inserat first
  l1.insertAt(1,value);
  end=l1.head;
}
void dequeue(){                                                              
//delete
  l1.delet();
//front = new tail
  front = l1.tail;
	
}
bool isempty(){
   if(end==NULL){
	   cout<<"it is empty"<<endl;}
   else{ cout<<"not empty"<<endl;}
}
int size(){
   l1.countitems();

}
void display(){
    l1.display();
}
};


int main(){
 queueLL q1;
   for(int i=0;i<5;i++){
   q1.endqueue(i);}
   q1.display();
   q1.dequeue();
   q1.display();
   q1.size();
   q1.isempty();
   
}

