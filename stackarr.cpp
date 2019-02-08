#include<iostream>
using namespace std;

//creating the class
class stackarr{
 public:
    //creating an array
    int arr[10];
    int count;
    stackarr(){
       count=0;}

//inserting at first position
void push(int value){
    if(count>10){
       cout<<"Not possible to insert an element"<<endl;
    }
    else{
      for(int i=count;i>0;i--){
      arr[i]=arr[i-1];}
      arr[0]=value;
      count++;
    }
}
//deleting at the first position
void pop(){
    if(count==0){
    cout<<"No elements to delete"<<endl;}
    else{
       for(int i=0;i<count;i++){
       arr[i]=arr[i+1];
       }
    count--;
    }
}
//checking whether the stack is empty or not
bool isempty(){
    if(count==0){
     cout<<"The stack is empty"<<endl;}
    else{
     cout<<"The stack is not empty"<<endl;}
}
    
//counting no of elements
int size(){
int n=0;
for(int i=0;i<count;i++){
  n++;}
  cout<<"The no of elements in the stack:"<<n<<endl; 
}
//printing the elements
void display(){
if(count==0){
   cout<<"No elements to print"<<endl;}
else{
 for(int i=0;i<count;i++){
   cout<<arr[i]<<"->";
  }
  cout<<endl;
}
}
};

//main function
int main(){
   stackarr A1;
   for(int i=0;i<10;i++){
   A1.push(i);}
   A1.display();
   A1.pop();
   A1.display();
   A1.push(9);
   A1.display();
   A1.isempty();
   A1.size();
}





    

