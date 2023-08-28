#include<stdio.h>

    int main() {

      int n;
      printf("enter size of array");
      scanf("%d", &n);
    
    int arr[n];
  
 // printf("enter the size");
 // scanf("%d",&n);

  for(int j=0;j<n;j++){
  printf("enter the number");
  scanf("%d", &arr[j]);
  }

  

  for(int i=0; i<n;i++)
  {
    if(arr[i]%2 != 0){
        printf("%d \n", arr[i]);
    }
  }

  return 0;
    }