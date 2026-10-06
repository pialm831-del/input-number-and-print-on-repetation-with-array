#include<stdio.h>
int main()
{
  int array[5],i,j,max=array[0];
  printf(" please input 5 numbers\n");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&array[i]);
  }
  printf(" output the numbers with max repeatation :\n");

  for(j=0;j<=10;j++){

  for(i=0;i<=4;i++)
  {
 printf("%d\n",array[i]);
  }
  if(array[i]>max)
  max=array[i];

printf("\n");
  }
printf("%d",max);
  return 0;
}

