#include<stdio.h>
void insertionsort(int arr[],int n);

int main()
{printf("\ninsertion sort");
int n;printf("\nenter the number of elements");
scanf("%d",&n);
int arr[n];
int i;
for(i=0;i<n;i++)
{printf("\nenter");
scanf("%d",&arr[i]);
}
insertionsort(arr,n);
printf("\nsorted array\n");
for(i=0;i<n;i++)
{printf("\n%d",arr[i]);
}
}
void insertionsort(int arr[],int n)
{int i,j,key;
for(i=1;i<n;i++)
{int key;
key=arr[i];
j=i-1;
while(j>=0 && arr[j]>key)
{arr[j+1]=arr[j];
j=j-1;
}
arr[j+1]=key;
}
}
