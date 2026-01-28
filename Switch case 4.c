# include<stdio.h>
int main ()
{
  int a;
  int age,dis,dis1;
  scanf("%d %d",&a,&age);
  int g;
  switch(a)
   {
    case 1:
     if(age<=12){
         dis=300/2;
         printf("fare :%d",dis);
     }
     if(age>=60){
         g=300-(33*300)/99;
         printf("fare :%d",g);
     }
     break;
     
     case 2:
     if(age<=12){
         dis1=1000/2;
         printf("fare :%d",dis1);
     }
     else{
         printf("fare :%d",1000);
     }
     break;

     
   }
    return 0;
}