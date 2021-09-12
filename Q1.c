#include<stdio.h>


int evenFibonacci(int n){
  if(n == 0 || n == 1)
    return n;

  return evenFibonacci(n - 1) + evenFibonacci(n - 2);
}

int main() {
  // The number of even Fibonacci numbers to print:
  int n = 5;

  int x;
  for(int i = 0; n > 0; i++){
    x = evenFibonacci(i);
    
    // Check if the number returned is even:
    if(x % 2 == 0){
      cout << x << " ";
      n--;
    }
  }
  
  return 0;
}

}
