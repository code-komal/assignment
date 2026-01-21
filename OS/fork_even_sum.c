#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wat.h>

int main() {
    int arr[30];
    int status;
    pid_t p1, p2;
    int final-sum-p1 = 0, final-sum-p2=0;
    
    srad (time (NULL));
    printf("Array initialized by parent\n ");
    for (int i=0; i<30; i++) arr[i]= rand () % 50 +1;
    
    //child 1
    p1 = fork();
    if (p1==0) {
    int sum=0;
    for(int i=0;i<=14;i++){
     if(arr[i]%2==0)
       sum+=arr[i];
    }
    exit(sum);
  }
    
    
    //parent waits for child 1
    waitpid (p2, &status, 0);
    final-sum-p1 = WEXITSTATUS (status);
    
    // child 2 
    p2 = fork();
    if (p2==0){
        int sum=0;
        for(int i=15; i<=29; i++{
         if (arr[i]%2==0)
            sum+=arr[i];
        }
        exit(sum);
      }
    
    //parent waits for child 2 
    waitpid (P2, &status, 0);
    final-sum-p2 = WEXITSTATUS (status);
    
    printf("\n Total Even Sum of left side and right are: %d and %d/n",
        final-sum-p1, final-sum-p2);
    return 0;
}
