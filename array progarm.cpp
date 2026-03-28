#include<stdio.h>
int main()
{ 
  int array[10]={20,30,40,50,60,70,80,90,100,110};
  int i;
  
  printf("element of the array are: \n");
  
  for(i=0;i<10;i++)
  {
  printf("array[%d]= %d\n",i,array[i]);
  }
  return 0;
}

