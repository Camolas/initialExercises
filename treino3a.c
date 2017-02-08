#include <stdio.h>
int main(){
int vi, vf, count=0, n, i, in, fi, u, j;
int si[101]={0}, sf[101]={0};
scanf("%d %d", &vi, &vf);
scanf("%d", &n);
for(i=0; i<n; i++){
scanf("%d %d %d", &u, &in, &fi);
if(!(fi<vi || vf<in)){
if(si[u]==0 || si[u]>in)
si[u]=in;
if(sf[u]==0 || sf[u]<fi)
sf[u]=fi;
}
}
for(j=0; j<101; j++){
if(si[j]<vf && sf[j]>vi)
count++;
}
printf("%d\n", count);
return 0;
}