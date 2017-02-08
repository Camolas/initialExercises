char maiuscula(int)
main(){
  char c;
  while((c=getchar())!=-1) 
    if(maiuscula(c))
      putchar(c+('a'-'A'));  /* 'a'-'A' = 32 */
    else putchar(c);
}
char maiuscula(int c) {return(c>='A' && c<='Z'); }

