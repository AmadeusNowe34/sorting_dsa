#include <stdio.h>

int main() {
   int x[]={10,7,4,3,5,6,2,8,9,1},
   n = 10, i,
   temp=0,count, compare=0, swap=0, assignment=0, step=0;
   
   for(i=0;i<n-1;i++){
      compare++;
       for (count=0; count<n-i-1;count++){
        

           if (x[count]>x[count+1]){
            step++;
            printf("\nStep %d: Comparing %d and %d, need to rearrange..", step, x[count], x[count+1]);
                compare++;
                compare++;

               temp= x[count];          assignment++;
               x[count]=x[count+1];     assignment++;
               x[count+1]=temp;         assignment++;

               swap++;


               printf("\nCurrent: ");
                for (int i=0; i<n; i++){
                printf(" %d", x[i]); 
                }
               
           } else {
                step++;
                printf("\nStep %d: Comparing %d and %d, order is correct..", step, x[count], x[count+1]);

                printf("\nCurrent: ");
                for (int i=0; i<n; i++){
                printf(" %d", x[i]); 
                }


           }

       }
   }
   
    printf("\n\nFinal Sorted Array: ");
           for (int i=0; i<n; i++){
                printf(" %d", x[i]); 
           }

    
    printf("\n\n==Operation Statistics==");
    printf("\nComparisons: "); printf(" %d\n", compare);
    printf("Swaps: "); printf(" %d\n", swap);
    printf("Assignments: "); printf(" %d\n", assignment);
    int Total = compare + swap + assignment;
    printf("Total Operation: "); printf(" %d\n", compare);

   
   

   
    return 0;
}