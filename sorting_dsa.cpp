#include <stdio.h>

int main() {
   int x[]={10,7,4,3,5,6,2,8,9,1},
   n = 10,
   temp=0;
   
   int i;
   int count;
   
   for(i=0;i<n-1;i++){
       printf("\n\nouter i= %d", i);
       printf("\nouter count= %d\n", count);
       for (count=0; count<n-i-1;count++){
           if (x[count]>x[count+1]){
               temp= x[count];
               x[count]=x[count+1];
               x[count+1]=temp;
               printf("\ninner i= %d", i);
               printf("\ninner count= %d", count);
           }
       }
   }
   
   printf("\nSorted array: ");
   for (int i=0; i<n; i++){
       printf(" %d", x[i]);
   }
   
   printf("\ni= %d\ncount = %d", i, count);
   
    return 0;
}