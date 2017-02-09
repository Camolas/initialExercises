int main() –
int n,k,i=0,j,ult=0,f=0;
scanf(”%d %d”,&n,&k);
while(i++¡n*k)–
scanf(”%d”,&j);
if (j¿=n —— j¿ult+1) f=1;
else if (j==ult+1&& f==0) ult++;
 ̋
if (f == 1) printf(”nao“n”);
else if (ult == n-1) printf(”sim“n”);
else printf(”incompleto“n”);
return 0;
