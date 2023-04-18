
// //implememting doubly linked list
#include<iostream>
using namespace std;
int no ,ch;
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *start,*ptr,*temp,*p;

void insertatbeg()
{
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    cout<<"\n memory is not allocate to ptr";
    else
    {
        cout<<"\n enter the no...";
        cin>>no;
        ptr->data=no;
        if(start==NULL)
        {
            ptr->next=NULL;
            ptr->pre=NULL;
            start=ptr;
        }
        else
        { 
            ptr->next=start;
            ptr->pre=NULL;
            start->pre=ptr;
            start=ptr;
        }
    }
} 
void insertatend()
{ 
    temp=start;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    cout<<"\n memory is not allocate to ptr";
     else
    {
     cout<<"\n enter the no...";
        cin>>no;
        ptr->data=no;
       if(start==NULL)
        {
            ptr->next=NULL;
            ptr->pre=NULL;
            start=ptr;
        }
         else
       {
       while (temp->next!=NULL)
       {
           temp=temp->next;
       }
       temp->next=ptr;
       ptr->pre=temp;
       ptr->next=NULL;
      }
    }
} 
 void print()
 {
     if(start==NULL)
     cout<<"\n nothing to print ";
     else
     {
         temp=start;
         while(temp->next!=NULL)
         {
             cout<<"\t"<<temp->data;
             temp=temp->next;
         }
         cout<<"\t"<<temp->data;
     }
 }
void deleatatbeg()
{
    if(start==NULL)
    cout<<"\n nothing to deleat";
else if(start->next==NULL)
    {
         cout<<"\n delited element is ..."<<start->data;
       start=NULL;
       free(start);
    }
    else 
    {
        temp=start;
        start=start->next;
        cout<<"\n delited element is ..."<<temp->data;
        start->pre=NULL;
        free(temp);
     }
} 
void deleatatend()
{
if(start==NULL)
    cout<<"\n nothing to deleat";
    else if(start->next==NULL)
    { cout<<"\n delited element is ..."<<start->data;
       start=NULL;
       free(start);
    }
    else 
    {
        temp=start;
        p=temp;
        while (temp->next!=NULL)
        {
         p=temp;
         temp=temp->next;
        }
        p->next=NULL;
        cout<<"\n delited element is ..."<<temp->data;
        free(temp);
        
    }
} 
int main()
{
do
{

cout<<"\n ----------main menu----------";
cout<<"\n press 1-to insert at begining ";
cout<<"\n press 2-to insert at end ";
cout<<"\n press 3-to deleat at begining ";
cout<<"\n press 4-to deleat at end ";
cout<<"\n press 5-to print ";
cout<<"\n press 6-to exit ";

cout<<"\n enter the choice... ";
cin>>ch;
switch(ch)
{
case 1:
insertatbeg();
break;
case 2:
insertatend();
break;
case 3:
deleatatbeg();
break;
case 4:
deleatatend();
break;
case 5:
print();
break;
case 6:
break;
default:
cout<<"\n wrong input";
break;
}
}while(ch!=6);



}
