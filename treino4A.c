 #include<stdio.h>

int main(void){
int seq[101];
int k, j, n, aux, v=0, i=0;
scanf("%d", &seq[i]);
while(seq[i] != 0 && i<101){
i++;
scanf("%d", &seq[i]);
}
aux=i;
scanf("%d", &n);
for(i=1;i<=n;i++){
scanf("%d",&k);
for(j=0;j<aux;j++){
if(seq[j] > 0){
if(seq[j] % k == 0) v=v+seq[j];
}
}
if(v!=0) printf("Soma dos multiplos positivos de %d: %d\n", k, v);
else printf("Sem multiplos positivos de %d\n", k);
v=0;
}
return 0;
}
