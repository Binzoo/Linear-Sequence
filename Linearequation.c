#include <stdio.h>
#include <conio.h>

void main(){
    int T1, T2, T3, d, e, Tn, n;

    printf("Enter T1: ");
    scanf("%d",&T1);

    printf("Enter T2: ");
    scanf("%d",&T2);

    printf("Enter T3: ");
    scanf("%d",&T3);

    d = T2 - T1;

    e = T3 - T2;

    if (d == e)
    {

    printf("Linear Sequence \n");

    printf("Enter n: ");
    scanf("%d",&n);

    Tn = T1+(n-1)*d;

    printf("%d", Tn);
    
    }
    else if (d != e)
    {

    printf("Not a linear Sequence \n");

    }
    getch();
} 