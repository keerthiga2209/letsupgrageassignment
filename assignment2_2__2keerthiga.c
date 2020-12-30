#include <stdio.h>
 

void leftRotateByOne(int arr[], int n)
{
    int first = arr[0];int i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = first;
}
 

void leftRotate(int arr[], int r, int n)
{int i;
    for (i = 0; i < r; i++)
        leftRotateByOne(arr, n);
}
 
int main(void)
{
    int arr[] = { 1, 2, 3, 4, 5 };
    printf("\nenter the number of rotations");int r;
    scanf("%d",&r);
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    leftRotate(arr, r, n);
 int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
 
    return 0;
}
