#import <stdio.h>


char * memcpy(char *dest, char *orig, int n)
{
  for (int i=0; i < n; i++)
    (*dest[i]) = (*orig[i]);
  return dest;
}

int main()
{

int vet1={'a','g','f','t','y','t','h','o','I'};
int vet2[10];
memcpy(vet1,vet2,4);
memcpy(vet2,vet1,7);

}
