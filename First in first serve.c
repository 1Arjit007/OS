#include<stdio.h>
#include<conio.h>
#include<dos.h>

void main()
{
 int n,b[10],w[10],i,j,h;
 int stime[10];
 float avg=0;
 clrscr();
 printf("\n\tJOB SCHEDULING ALGORITHM[FCFS]");
 printf("\n\t*************************************************
                                                                                                    ****\n");
 printf("\nEnter howmany jobs:");
 scanf("%d",&n);

 printf("\nEnter burst time for corresponding job....\n");
 for(i=0;i<n;i++)
 {
  printf("\nProcess %d:",i+1);
  scanf("%d",&b[i]);
 }

 w[0]=0;

 printf("\nprocess 1 waiting time is 0");
 for(i=1;i<n;i++)
 {
  w[i]=b[i-1]+w[i-1];
  printf("\nProcess %d waiting time: %d",i+1,w[i]);
  avg+=w[i];
 }



 printf("\ntotal waiting time:%f",avg);

 printf("\n\nthe average waiting time is:%f\n",avg/n);
 printf("\nGaunt           
             Chart\n***************************************\n\n\t");
 h=22;

 for(i=0;i<n;i++)
 {
  printf("%d",b[i]);
  for(j=1;j<=b[i];j++)
   printf("%c",h);
 }
 printf("\n\t");
 for(i=0;i<n;i++)
 {
  printf("%d",w[i]);
  for(j=1;j<=w[i];j++)
   printf("%c",h);
  delay(1000);
 }
getch();
}





