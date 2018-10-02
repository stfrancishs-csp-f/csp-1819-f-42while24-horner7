#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    k=0;
    while(k<5)
    {
        sum=sum+k; //use something different in "while" version
        printf("number being added is %d, comulative sum is %d\n", k, sum);
        k++;
    }

    printf ("%d\n",sum);//conversion character %d\n - prints "sum" in the quotes

    //k=5;

    printf("counting down\n");

    for (k=10;k>=0; k--)
    {
        //k=k-1; //use something different in "for" version
        printf ("%d\n", k);
    }
    printf("blastoff!\n");
}

