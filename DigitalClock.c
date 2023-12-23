#include <stdio.h>

int main(){
  
  int h,m,s;
  printf("Set the live time\n\n");
  
  printf( "\nThe Hour: ");
  scanf("%d",&h);
  
  printf( "\nThe Minute: ");
  scanf("%d",&m);
  
  printf( "\nThe Second: ");
  scanf("%d",&s);
  
  if(h>24 || m>60 || s>60){
    printf("Invalid time format");
    return 0;
  }
  
  while(1){
    s++;
    if(s>59){
      m++;
      s=0;
    }
    
    if(m>59){
      h++;
      m=0;
    }
    
    if(h>24){
      h=0;
    }

    system("clear");
    
    printf("Digital Clock\n\n");
    printf("%02d:%02d:%02d\n",h,m,s);

    sleep(1);
  }

}
