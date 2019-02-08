#include<iostream>
using namespace std;
//creating the class
class Queuearr{
public:
   int arr[10];
   int count;
   Queuearr(){
      count=0;
   }

//inserting at last position
void endqueue(int value){
   if(count>10){
   cout<<"Impossible to add an element"<<endl;}
   else{
   arr[count]=value;}
   count++;
}
//deleting from the first position
void dequeue(){
   if(count==0){
   cout<<"There is no element to delete"<<endl;}
   else{
      for(int i=0;i<count;i++){
      arr[i]=arr[i+1];}
   count--;
   }
}
bool isempty(){
   if(count==0){
   cout<<"The queue is empty"<<endl;}
   else{
   cout<<"The queue is not empty"<<endl;}
}
int size(){
     int n=0;
     for(int i=0;i<count;i++){
     n++;}
     cout<<"The no of elements in the queue :"<<n<<endl;
}
//printing the elements
void display(){
  if(count==0){
  cout<<"There is no element top print"<<endl;}
  else{
  for(int i=0;i<count;i++){
   cout<<arr[i]<<"->";}
   cout<<endl;}
}
};
//main function
int main(){
   Queuearr Q1;
   for(int i=0;i<10;i++){
    Q1.endqueue(i);}
    Q1.display();
    Q1.dequeue();
    Q1.display();
    Q1.endqueue(10);
    Q1.display();
    Q1.dequeue();
    Q1.display();
    Q1.isempty();
    Q1.size();
    }




















      


     
  
   
