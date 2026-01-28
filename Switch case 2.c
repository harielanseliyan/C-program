#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
   switch(a/9)
   {
     case 10:
     if(a>=91 ){
      printf("A");
     }
      break;
     case 9:
       if (a>=81 && a<=90){
       printf("B");
       }
       break;
     case 8:
      if(a>=71 && a<=80){
      printf("C") ; 
      }
      break; 
     case 7:
      if(a>=61 && a<=70){
      printf("D");
      }
      break;    
     case 6:
      if(a>=51 && a<=60){
      printf("E"); 
      }
      break;
     case 5:
      if(a>=41 && a<=50){
      printf("F") ; 
      }
      break;  
     case 4:
      if(a>=31 && a<=39){
      printf("Grade Supplementary");  
      }
      break;
     case 3:
      if(a<=30){
      printf("Fail");
      }
      break;

   } 

    return 0;
}