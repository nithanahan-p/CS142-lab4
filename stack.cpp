#include<iostream>
#include "nm.cpp"     //copy all the ll 

using namespace std;
class stackLL{
    public:
    node*top;
    linkedlist l1;
    //default constructor
    stackLL(){
       top=l1.head;  //making it null
    }
///pushes on the top
void push(int value){
    l1.insertAt(1,value);
    //top=new head;
    top=l1.head;

}
//pops out the top element
void pop(){
//void deletAt(int pos)
    l1.deletAt(1);
    //top=new head;
    top=l1.head;

}
bool isempty(){
   if(top==NULL){cout<<"is empty"<<endl;}
   else{cout<<"not empty"<<endl;}
}
int size(){
 l1.countitems();

}
//void topdisplay(){
 
//}
void display(){
    l1.display();}
};





int main(){
   //defining an object
   stackLL s1;
   for(int i=0;i<6;i++){
   s1.push(i);}
   
   s1.display();
   s1.pop();
   s1.pop();
   s1.display();
   s1.isempty();
   s1.size();
   
  }  
 
   
     
   
   










    



