#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int x[10],
   n = 10, i, z, Total,
   temp=0,count, compare=0, swap=0, assignment=0, step=0;
   
//Number Randomizer
   srand(time(NULL));
   printf("Initial Array: ");
   for( z = 0; z < n; z++){
    
    x[z] = (rand() % 100) + 1;

    printf(" %d", x[z]);
   }

//Sorting
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
                printf("\n");
               
           } else {
                step++;
                printf("\nStep %d: Comparing %d and %d, order is correct..", step, x[count], x[count+1]);

                printf("\nCurrent: ");
                for (int i=0; i<n; i++){
                printf(" %d", x[i]); 
                }
                printf("\n");


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
    Total = compare + swap + assignment;
    printf("Total Operation: "); printf(" %d\n", Total);

   
   

   
    return 0;
}