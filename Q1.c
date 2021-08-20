#include<stdio.h>
const int maxN=1e5;
int memo[100000];
void fibbonacci(int index, int n , int count)
{
    memo[index] = memo[index - 1] + memo[index - 2];
    if(((memo[index]&1)^1))
    {
    	printf("%d ",memo[index]);
    	count++;
    }
    if(count >= n){
       return;
    }
  
  
    fibbonacci(index + 1 , n ,count);
}

void fib(int n) {
    memo[1] = 1;
    memo[2] = 1;
    fibbonacci(3,n,0);
}

int main()
{
    int n ;
    printf("Enter n = ");
    scanf("%d",&n);
    fib(n);

}