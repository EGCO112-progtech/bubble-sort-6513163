#include <stdio.h>
#include <stdlib.h>
#include "sorting.h"

int Isprime(int N){
  if(N == 1) return 0;
  for(int i=2; i<N; i++){
    if(N%i==0) return 0;
  }
  return 1;
}

int main(int argc, char *argv[]) {
  int i,j=0,*a,n,*prime;
  n=argc-1;
  a=(int*)malloc(sizeof(int)*n);
  prime=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++) {
      a[i]=atoi(argv[i+1]);
        if(Isprime(a[i])) {
          prime[j]=a[i];
          j++;
        }
    }
  if(j==0) printf("No prime\n");
  else { 
    n=j;
  display(prime,n);
  bubbleSort(prime,n); 
   //insertion(a,N);

  // selectionSort(a,N);
   display(prime,n);
  }
 return 0;
}


