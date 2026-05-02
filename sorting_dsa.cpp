#include <stdio.h>

int main() {
   int x[]={10,7,4,3,5,6,2,8,9,1},
   n = 10,
   temp=0;
   
   int i;
   int count;
   
   for(i=0;i<n-1;i++){
       
       for (count=0; count<n-i-1;count++){
           if (x[count]>x[count+1]){
               temp= x[count];
               x[count]=x[count+1];
               x[count+1]=temp;
              
           }
       }
   }
   
   printf("\nSorted array: ");
   for (int i=0; i<n; i++){
       printf(" %d", x[i]);
   }
   
   
    return 0;
}