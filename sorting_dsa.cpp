
#include <stdio.h>

int main() {
   int x[]={5,6,8,9,2,1,3,4,7,10},
   n = 10,
   temp=0;
   
   for(int i=0;i<n-1;i++){
       for (int count=0; count<n-i-1;count++){
           if (x[count]>x[count+1]){
               temp= x[count];
               x[count]=x[count+1];
               x[count+1]=temp;
           }
       }
   }
   
   printf("Smallest to Biggest: ");
   for (int i=0; i<n; i++){
       printf(" %d", x[i]);
   }
   
    return 0;
}