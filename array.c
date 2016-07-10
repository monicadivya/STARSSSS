# include<stdio.h>
# include<conio.h>
void main()
{
int arr[5];
int i,j,temp;
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
for(i=0;i<4;i++)
{
  for(j=i+1;j<5;j++)
  {
   if(arr[i]<arr[j])
   {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
}
}
printf("the decreased order is");
for(i=0;i<5;i++)
printf("%d ",arr[i]);
getch();
}
