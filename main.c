#include <stdio.h>
#include<stdlib.h>
struct node
{
  int data;struct node *next;};
struct node *head=NULL;
int l=0;
void create()
{struct node* temp =(struct node *) malloc (sizeof (struct node));
 struct node* p=head;
 printf("ENTER THE DATA: ");
 scanf ("%d",&temp->data);
  if (head == NULL)
    {head=temp;temp->next=NULL;}
 else
{while (p->next!= NULL)
{	p = p->next; }
      p->next=temp;
    temp->next=NULL;}
}
void length()
{int len=1;
struct node *p=head;
if(head==NULL)
printf("ITS IS AN EMPTY LIST \n");
else
{ while(p!=NULL)
   { len++;l++;
    p=p->next;}
}
    
printf("THE LENGTH OF THE LIST IS :%d \t no.of nodes:%d",len,l);}
void insert_AT_AFTER()
{
    struct node *p=head;
    struct node *pre_p=p;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    int position; 
    printf("ENTER THE DATA OF THE NEW NODE:");scanf("%d",&new->data);
    printf("\nENTER THE POSITION OF THE DATA  AFTER TO BE INSERTED "); scanf("%d",&position);
    while(pre_p->data!=position)
    {pre_p=p;p=p->next;}
    pre_p->next=new;
    new->next=p;

}
void insert_AT_BEFORE()
{  struct node *p=head;
    struct node *pre_p=p;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    int position; 
    printf("ENTER THE DATA OF THE NEW NODE:");scanf("%d",&new->data);
    printf("\n ENTER THE DATA OF THE NODE BEFORE TO BE INSERTED "); scanf("%d",&position);
    while(p->data!=position)
    {pre_p=p;
    p=p->next;}
    pre_p->next=new;
    new->next=p; 
}
void insert_AT_BEGINNING()
{
    struct node *p=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF THE NEW NODE:");
    scanf("%d",&new->data);
    new->next=p ;
    head=new;
    
}
void insert_AT_END()
{
    struct node *p=head;
    struct node *new=(struct node*)malloc(sizeof(struct node));
    printf("ENTER THE DATA OF THE NEW NODE:");
    scanf("%d",&new->data);
    while(p!=NULL)
    p=p->next;
    
    p->next=new;  ;
    new->next=NULL;
}
void delete_AT_AFTER()
{
    struct node *p=head;
    struct node *pre_p=p;
    
    int position; 
    printf("ENTER THE POSITION OF THE NODE TO BE DELETED :"); 
    scanf("%d",&position);
    while(pre_p->data!=position)
    {pre_p=p;p=p->next;}
pre_p->next=p->next;
    free(p);
    
}
void delete_AT_BEFORE()
{  struct node *p=head;
    struct node *pre_p=p;
    struct node *pre_pre_p=pre_p;
    int position; 
    printf("ENTER THE POSITION OF THE NODE TO BE DELETED "); 
    scanf("%d",&position);
    
    while(p->data!=position)
    {pre_pre_p=pre_p;pre_p=p; p=p->next;}
    pre_pre_p->next=p;
    free(pre_p);
        
    }
void delete_AT_BEGINNING()
{
    struct node *p=head;
    head=head->next;
    free(p);

}
void delete_AT_END()
{
    struct node *p=head;
 struct node *pre_p=p;
    while(p!=NULL)
    {p=p->next;}
pre_p->next=NULL;
free(p);

}
void search()
{int searchelement,posi=0,f=0;printf("ENTER THE SEARCH ELEMENT :");
scanf("%d",&searchelement);
struct node *p=head;
while(p!=NULL)
{ if(p->data==searchelement)
    { f=1 ;break;}
p=p->next; posi++;}
if(f==1) 
printf("THE ELEMENT FOUND!! at node : %d",posi);
else
printf("ELEMENT NOT FOUND");
}
void display()
{struct node *p=head;
 while(p!=NULL)
{    printf("%d\t",p->data);
    p=p->next;
}
 }
 
void main()
{
  int choice;
  do
    { printf
    ("\n\n 1.Create \n 2.Length \n 3.Insert_at_beginning  \n 4.Insert_at_end \n 5.Insert_at_before \n 6.Insert_at_after \n 7.Delete_at_beginning \n 8.Delete_at_end \n 9.Delete_at_before \n 10.Delete_at_after \n 11.Search \n 12.Display \n\n TO END THE PROGRAM PRESS 0");
 
    printf("\n ENTER THE CHOICE :");scanf ("%d",&choice);
      switch (choice)
	{
	case 1:
	  create();
	  break;
	case 2:
	  length();
	  break;
	case 3:
	  insert_AT_BEGINNING();
	  break;
	case 4:
	  insert_AT_END();
	  break;
	case 5:
    insert_AT_BEFORE();
    break;
    case 6:
    insert_AT_AFTER();
    break;
    case 7:
    delete_AT_BEGINNING();
    break;
    case 8:
    delete_AT_END();
    break;
    case 9:
    delete_AT_BEFORE();
    break;
    case 10:
    delete_AT_AFTER();
    break;
    case 11:
    search();
    break;
    case 12:
    display();
    break;
default:
if(choice!=0)
printf("GIVE A NO WITHIN A CHOICE 1-12  \n");
	}
        
    }
while(choice!=0);
printf("END OF THE PROGRAM!!!");


  }






