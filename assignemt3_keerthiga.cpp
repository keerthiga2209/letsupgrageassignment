#include<stdio.h>
#include<stdlib.h>
void insert_any();
void delete_beg();
void delete_end();
struct node
{int data;
struct node *next;
};
struct node *start;
int main()
{printf("\nwelcome to singly linkedlist");
int ch;
while(1)
{printf("\nenter the choice \n1for insert_any \n2 for delete_beg()\n 3 for delete_end()");
scanf("%d",&ch);
switch(ch)
{
case 1:insert_any();break;
case 2:delete_beg();break;
case 3:delete_end();break;
}}
}
void insert_any()
{struct node *temp;
temp=(struct node *)(malloc(sizeof(struct node)));
if(temp==NULL)
{printf("\noverflow occurs");

}
if(start==NULL)
{printf("\nenter the element");
scanf("%d",&temp->data);
temp->next=NULL;
start=temp;
}
else
{printf("\nenter the position");
int pos;
scanf("%d",&pos);
int i;
struct node *temp1;
temp1=(struct node *)(malloc(sizeof(struct node)));
if(temp1==NULL)
{printf("\noverflows occurs");
}
temp1=start;
for(i=0;i<pos;i++)
{temp1=temp1->next;
if(temp1==NULL)
{printf("\nsize exceeded than expected");
}

}
printf("\nenter the element");
scanf("%d",&temp->data);
temp->next=temp1->next;
temp1->next=temp;

}
}
void delete_beg()
{printf("\nwelcome to deletion process");
if(start==NULL)
{printf("\nthe list is empty");
}
else
{struct node *temp;
temp=(struct node *)(malloc(sizeof(struct node)));
temp=start;
free(temp);
start=start->next;
printf("\nsuccessfully deleted");
}
}
void delete_end()
{if(start==NULL)
{printf("\nlist is empty");

}
struct node *temp,*temp1;
temp=(struct node *)(malloc(sizeof(struct node)));
temp1=(struct node *)(malloc(sizeof(struct node)));
temp=start;
while(temp->next!=NULL)
{temp1=temp;temp=temp->next;
}
temp1->next=NULL;
free(temp);
printf("\nnode deleted successfully");
}

