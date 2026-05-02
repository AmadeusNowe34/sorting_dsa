#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
   int x[10],
   n = 10, i, z, Total,
   temp=0,count, compare=0, swap=0, assignment=0, step=0;
   
//Number Randomizer
   srand(time(NULL));
   printf("==Custom Sorting Analysis==\n\n");
   printf("Initial Array: ");
   for( z = 0; z < n; z++){
    
    x[z] = (rand() % 100) + 1;

    printf(" %d", x[z]);
   }
   printf("\n");

//Sorting
   printf("\n[][]Sorting Progress[][]\n");
   for(i=0;i<n-1;i++){
      
       for (count=0; count<n-i-1;count++){
        

           if (x[count]>x[count+1]){
            printf("\nStep %d: Comparing %d and %d, need to rearrange..", step, x[count], x[count+1]);
                
            

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
                printf("\nStep %d: Comparing %d and %d, order is correct..", step, x[count], x[count+1]);

                printf("\nCurrent: ");
                for (int i=0; i<n; i++){
                printf(" %d", x[i]); 
                }
                printf("\n");


           }
         step++;
         compare++;
       }
   }
    printf("\n\n====================\n");
    printf("Final Sorted Array: ");
           for (int i=0; i<n; i++){
                printf(" %d", x[i]); 
           }
    printf("\n\n====================\n");
    
    printf("\n\n==Operation Statistics==");
    printf("\nComparisons: "); printf(" %d\n", compare-1);
    printf("Swaps: "); printf(" %d\n", swap);
    printf("Assignments: "); printf(" %d\n", assignment);
    Total = compare + swap + assignment;
    printf("Total Operation: "); printf(" %d\n", Total);

   
   

   
    return 0;
}