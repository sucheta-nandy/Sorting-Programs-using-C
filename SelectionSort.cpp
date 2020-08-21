#include<stdio.h>
int main(){
   /* Here i & j for loop counters, temp for swapping,
    * count for total number of elements, number[] to
    * store the input numbers in array. 
    */
   int i, j, count, temp, number[25];

   printf("Enter the number of elements: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);
   
   // Loop to get the elements stored in an array
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
 
   // Logic of selection sort algorithm
   for(i=0;i<count;i++){
      for(j=i+1;j<count;j++){
         if(number[i]>number[j]){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
      }
   }

   printf("Sorted elements are: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
