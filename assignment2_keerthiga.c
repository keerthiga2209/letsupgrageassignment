#include<stdio.h>
void delatbeg(int arr[],int n);
void delatpos(int arr[],int n);
void display(int arr[],int n);
int main()
{printf("\nwelcome to deletion action");
int ch;
printf("\nenter the number of elements in the array");int n;
scanf("%d",&n);int arr[n];
int i;
for(i=0;i<n;i++)
{scanf("%d",&arr[i]);

}
printf("\nthe given array is");
for(i=0;i<n;i++)
{printf("\n%d",arr[i]);
}
while(ch!=3)
{
printf("\npress 1 to delete from the beginning and \n2 for delete at any position \n3 to exit");
scanf("%d",&ch);
switch(ch)
{case 1:delatbeg(arr,n);break;
case 2:delatpos(arr,n);break;
case 3:printf("\nexiting");
}}
}
void delatbeg(int arr[],int n)
{printf("\nthe first element is going to be deleted");int i;
for(i=0;i<n;i++)
{arr[i]=arr[i+1];
}
printf("\ndeletion successfull");
display(arr,n-1);
}
void delatpos(int arr[],int n)
{printf("\nthe element at the position to be given is to get deleted");
int i;
int pos;
printf("\nenter the position");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
{arr[i]=arr[i+1];
}
printf("\ndeletion successfull");
display(arr,n);
}
void display(int arr[],int n)
{int i;
for(i=0;i<n;i++)
{printf("\n%d",arr[i]);
}
}

