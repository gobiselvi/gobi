 #include<stdio.h>
int main(){
  int g1,g2,x,y;
  printf("\nEnter two numbers:");
  scanf("%d %d",&g1,&g2);
  x=g1,y=g2;
  while(g1!=g2){
      if(g1>g2)
           g1=g1-g2;
      else
      g2=g2-g1;
  }
  printf("L.C.M=%d",x*y/g1);
  return 0;
}

