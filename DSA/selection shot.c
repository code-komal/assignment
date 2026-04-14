#include<stdio.h>
int main(){
  int arr={2,3,4,5,6}
  int n=5;
  int i,j,min,temp;
  for(i=0;j<n-1;i++){
   min=i;
   for(i=i+1; j<n; j++){
      if(arr[j]<arr[min]){
       min= j;
       }
   }
   if (min!=i){
    temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
    swapped= 1;
  }
  if (swapped==0){
   break;
  }
  printf=("sorted array");
  for(i=0; i<n;) i++){
   printf("%d", arr[i]);
 }
 
 return 0; 

}
