#include <stdio.h>
int korota(int n1,int n2);

int main()
{
    int luku, pot;

    printf("Anna korotettava luku: ");
    scanf("%d",&luku);
    printf("Anna potenssi: ");
    scanf("%d",&pot);
    printf("%d^%d = %d", luku, pot, korota(luku, pot));
    return 0;
}

int korota(int luku,int pot)
{
    if ( pot!=1 )
        return (luku*korota(luku,pot-1));
}
