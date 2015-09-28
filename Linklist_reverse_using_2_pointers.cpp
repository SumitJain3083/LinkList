#include <iostream>
#include <bits/stdc++.h>


using namespace std;


struct list1
{
int data; //int data
struct list1 *next; // pointer to next data
}*head=NULL;  //making head pointer as Global , you can make it local to main also

int printlist()   //function to print the list
{
 struct list1 *temp=head;
 while(temp!=NULL){         //print while the next pointer of the list is not NULL
  cout<<temp->data<<" ";
  temp=temp->next;
 }
 cout<<endl;
 return 0;
}

int reverse_2pointer()  //function using 2 pointers to reverse the link list
{
 struct list1 *prev=NULL , *current = head;
 
 while(current!=NULL)  // start of logic
 {                     
   current=head->next;
   head->next=prev;
   prev=head;
   head=current;
 }
 return 0;
}



int main()
{
 int times,x;
 cin>>times;//Number of node to be inserted

////////////////////////////////
// START OF INPUT FUNCTION 
////////////////////////////////
 for(int i=0;i<times;i++)
 {
  cin>>x;
  if(head==NULL)
  {
    head = (struct list1*)malloc(sizeof(struct list1));
    head->data=x;
    head->next=NULL;
  }
  else
  {
   struct list1 *temp = (struct list1*) malloc(sizeof(struct list1));
    temp->data=x;
    temp->next=head;
    head=temp; 
  }
 } 
///////////////////////////////////
// INPUT FUNCTION IS RANDOM YOU CAN MAKE IT AS DIFFERENT ROUTINE TO HANDEL
//////////////////////////////////
 printlist();
 reverse_2pointer();
 printlist(); 
 return 0; 
}
