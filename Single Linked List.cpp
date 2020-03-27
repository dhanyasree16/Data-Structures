#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;

}*head=NULL,*newnode,*prev,*delnode,*temp,*last;
int main()
{
int option;
void insertf();
void insertl();
void insertm();
void deletem();
void deletef();
void deletel();
void display();
void search();
void nodes();
while(1)
{
printf("1.insert the node\n");
printf("2.delete the node\n");
printf("3.display the node\n");
printf("4.serach the node\n");
printf("5.no.of nodes\n");
printf("enter the option\n");
scanf("%d",&option);
    switch(option)
    {
       case 1:
printf("insert\n");
printf("1.insert at the first\n");
printf("2.insert at the last\n");
printf("3.insert in the middle\n");
printf("enter your choice\n");
scanf("%d",&option);
           switch(option)
           {

           case 1:
insertf();
            break;
           case 2:
insertl();
           break;
           case 3:
insertm();
           break;
           }
          break;
      case 2:
printf("delete\n");
printf("1.delete at the first\n");
printf("2.delete at the last\n");
printf("3.delete in the middle\n");
scanf("%d",&option);
          switch(option)
          {
           case 1:
deletef();
            break;
           case 2:
deletel();
           break;
           case 3:
deletem();
           break;
           }
         break;
      case 3:
display();
         break;
      case 4:
search();
       break;
       case 5:
nodes();
        break;
}
}
return 0;
}    
void getnode()
{
newnode=(struct node*)malloc(sizeof( struct node));
}
void readnode()
{
int num;
scanf("%d",&num);
newnode->data=num;
newnode->link=NULL;
}
void insertl()
{
getnode();
if(newnode==NULL)
{
printf("memory insufficient");
return ;
    }
readnode();
if(head==NULL)
{
head=last=newnode;
return ;
}
else
{

last->link=newnode;
last=last->link;
}
}
void insertf()
{
getnode();
if(newnode==NULL)
{
printf("memory insufficient");
return ;
}
readnode();
if(head==NULL)
{
head=last=newnode;
return ;
}
else
{

newnode->link=head;
head=newnode;
}
}
void deletel()
{
if(head==NULL)
    {
printf("is empty");
return ;
}
else if(head==last)
{
delnode=head;
head=last=NULL;
free(delnode);
return ;
}
else
{
temp=head;
while(temp!=NULL)
{
prev=temp;
temp=temp->link;
}
delnode=last;
last=prev;
free(delnode);
last->link=NULL;
return ;
}
}
void display()
{
if(head==NULL)
{
printf("linked is empty");
}
else
{
temp=head;
printf("linked list is\n");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
}
}
void deletef()
{
if(head==NULL)
{
printf("empty");
return ;
}
else if(head==last)
{
delnode=head;
head=last=NULL;
free(delnode);
return ;
}
else
{
delnode=head;
head=head->link;
free(delnode);
return ;
}
}
void deletem()
{
   int x;
   if(head==NULL)
{
printf("empty");
return ;
}
else if(head==last)
{
delnode=head;
head=last=NULL;
free(delnode);
return ;
}
else
{
temp=head;
scanf("%d",&x);
while(temp!=NULL)
{
if(temp->data==x)
{
delnode=temp;
prev->link=temp->link;
free(delnode);
return;
}
else
{
prev=temp;
temp=temp->link;
}
}
}
}
void insertm()
{
int x;
getnode();
if(newnode==NULL)
{
printf("no memory");
return;
}
readnode();
if(head==NULL)
{
head=last=newnode;
return;
}
scanf("%d",&x);
temp=head;
while(temp!=NULL)
{
if(temp->data==x)
{
newnode->link=temp->link;
temp->link=newnode;
return;
}
else
temp=temp->link;
}
return;
}
void search()
{
int x;
scanf("%d",&x);
temp=head;
while(temp!=NULL)
{
if(temp->data==x)
{
printf("Element Found \n");
return;
}
temp=temp->link;
}
printf("Element Not Found\n");
}
void nodes()
{
 temp = head;
  int count=0;
while(temp != NULL)
{

temp = temp->link;
count++;
 }
printf("Total no. of nodes is %d\n",count);
}

Output:
1.insert the node
2.delete the node
3.display the node
4.serach the node
5.no.of nodes
enter the option
1
insert
1.insert at the first
2.insert at the last
3.insert in the middle
enter your choice
2

1.insert the node
2.delete the node
3.display the node
4.serach the node
5.no.of nodes
enter the option
2
delete
1.delete at the first
2.delete at the last
3.delete in the middle
1

1.insert the node
2.delete the node
3.display the node
4.serach the node
5.no.of nodes
enter the option
3
linked is empty

1.insert the node
2.delete the node
3.display the node
4.serach the node
5.no.of nodes
enter the option
4
Element Not Found

1.insert the node
2.delete the node
3.display the node
4.serach the node
5.no.of nodes
enter the option
5
Total no. of nodes is 0


