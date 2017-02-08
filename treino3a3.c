
    #include<stdio.h>
     
    int main(void){
     
      int inicio,final,aux=0,n,i,susp=0,fn,fi,ff;
     
      scanf("%d %d\n",&inicio,&final);
      scanf("%d\n",&n);
     
      for(i=0;i<n;i++){
        scanf("%d %d %d\n",&fn,&fi,&ff);
        if ((aux!=fn)&&(fi>=inicio)&&(fi<=final)){
          susp++;
          aux=fn;
        }
      }
     
      printf("%d\n",susp);
     
      return 0;
    }
