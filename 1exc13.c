#include<stdio.h>
#include<stdlib.h>
void triangulo(int x, int y, int z)
{
    if(((abs(y-z)<x && x<y+z) && (abs(x-z)<y) && y<x+z) && (abs(x-y)<z) && (z<x+y))
    {
        if((x!=y)&&(x!=z)&&(y!=z))
        {
            printf("escaleno");
        }
        else if((x==y)&&(y!=z) || (y==z)&&(x!=z) || (x==z)&&(y!=z))
        {
            printf("isoceles");
        }
        else if((x==y) && (x==z))
        {
            printf("equilatero");
        }
    }

}
int main()
{
    int x,y,z;

    printf("lado x\n");

    scanf("%d",&x);

    printf("lado y\n");

    scanf("%d",&y);

    printf("lado z\n");

    scanf("%d",&z);

    triangulo(x,y,z);
    return 0;
}

