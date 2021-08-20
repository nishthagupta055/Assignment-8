#include<stdio.h>
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int mth_smallest_number(int a[],int m)
{
	return a[m-1];
}
int partition (int a[], int lb, int rb)
{
    int pivot=a[lb];
    int i =lb;
    int j=rb ;
    while(i<j)
    { 
      while(a[i]<=pivot)
      i++;
      while(a[j]>pivot)
      j--;
      if(i<j)
      swap(&a[i],&a[j]);
    }
    swap(&a[lb],&a[j]);
    return j; 
}
void quickSort(int arr[], int low, int high)
{
    
    if(low<high)
    {
        int pi=partition(arr, low, high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
    
   
   
int main()
{
    int n ;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    int a[n];
    for(int i = 0 ; i < n ; ++i)
    {
    	scanf("%d",&a[i]);
    }
    int m;
    printf("Enter value of m : ");
    scanf("%d",&m);
    quickSort(a,0,n-1);
    printf("%dth samllest element is %d\n",m,mth_smallest_number(a,m))  ;  
}