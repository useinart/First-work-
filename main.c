#include<stdio.h>

int main()
{
    int weight;
    int height;
    int plot;
    int n1=scanf("%d", &weight);
    int n2=scanf("%d",&height);
    if((n1!=1) || (n2!=1))
    {
        fprintf(stderr,"Error: Chybny vstup!\n");
        return 100;
    }
    if ((weight > 69) || (weight < 3) || (height > 69 ) || (height < 3 ))
    {
        fprintf(stderr,"Error: Vstup mimo interval!\n");
        return 101;
    }
    if (weight % 2 == 0 )
    {
        fprintf(stderr,"Error: Sirka neni liche cislo!\n");
        return 102;
    }
    if(weight != height)
    {
            int halfweight = weight / 2;
            for (int i = 0; i < halfweight; i++)
            {
                for (int j = 0; j < halfweight - i; j++)
                {
                    printf(" ");
                }
                printf("X");
                if (i == 0)
                {
                    printf("\n");
                    continue;
                }
                for (int k = 0; k < 2*i - 1; k++)
                {
                    printf(" ");
                }
                printf("X\n");
            }
            for (int l = 0; l < weight ; l++)
            {
                printf("X");
            }
            printf("\n");
            for (int p = 0; p < height - 2 ; p++)
            {
                printf("X");
                for (int m = 0; m < weight - 2 ;m++)
                {
                    printf(" ");
                }
                printf("X\n");
            }
            for (int l = 0; l < weight ; l++)
            {
                printf("X");
            }
    }
    if(weight == height)
    {
        int n3;
        n3=scanf("%d", &plot);
        if (( n1 != 1 ) || (n2 != 1) || (n3 != 1 ))
        {
            fprintf(stderr,"Error: Chybny vstup!\n");
            return 100;
        }
            if ((weight > 69) || (weight < 3) || (height > 69 ) || (height < 3 ))
            {
                fprintf(stderr,"Error: Vstup mimo interval!\n");
                return 101;
            }
            if (weight % 2 == 0 )
            {
                fprintf(stderr,"Error: Sirka neni liche cislo!\n");
                return 102;
            }
            if ((plot >= height) || (plot <= 0))
            {
                fprintf(stderr,"Error: Neplatna velikost plotu!\n" );
                return 103;
            }
            int halfweight = weight / 2;
            for (int i = 0; i < halfweight; i++)
            {
                for (int j = 0; j < halfweight - i; j++)
                {
                    printf(" ");
                }
                printf("X");
                if (i == 0)
                {
                    printf("\n");
                    continue;
                }
                for (int k = 0; k < 2*i - 1; k++)
                {
                    printf(" ");
                }
                printf("X\n");
            }
            for (int l = 0; l < weight ; l++)
            {
                printf("X");
            }
            printf("\n");
            for (int p = 0; p < height - 2 ; p++)
            {
                printf("X");
                for (int m = 0; m < weight - 2 ;m++)
                {
                    if((m + (p % 2))  % 2 == 0 )
                    {
                        printf("o");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                printf("X");
                if (p == height - plot - 1)
                {
                    if(plot % 2 == 1)
                    {
                        printf("|");
                        for(int f = 0; f < plot - 1; f++)
                        {
                            if(f % 2 == 0)
                            {
                                printf("-");
                            }
                            else
                            {
                                printf("|");
                            }
                        }
                    }
                    else
                    {
                        for(int f = 0; f < plot; f++)
                        {
                            if(f % 2 == 0)
                            {
                                printf("-");
                            }
                            else
                            {
                                printf("|");
                            }
                        }
                    }
                }
                if (p > height - plot - 1  )
                {
                    if(plot % 2 == 1)
                    {
                        printf("|");
                        for(int f = 0; f < plot - 1; f++)
                        {
                            if(f % 2 == 0)
                            {
                                printf(" ");
                            }
                            else
                            {
                                printf("|");
                            }
                        }
                    }
                    else
                    {
                        for(int f = 0; f < plot; f++)
                        {
                            if(f % 2 == 0)
                            {
                                printf(" ");
                            }
                            else
                            {
                                printf("|");
                            }
                        }
                    }
                }
                printf("\n");
            }
            for (int l = 0; l < weight; l++)
            {
                printf("X");
            }
            if(plot % 2 == 1)
            {
                printf("|");
                for(int f = 0; f < plot - 1; f++)
                {
                    if(f % 2 == 0)
                    {
                        printf("-");
                    }
                    else
                    {
                        printf("|");
                    }
                }
            }
            else
            {
                for(int f = 0; f < plot; f++)
                {
                    if(f % 2 == 0)
                    {
                        printf("-");
                    }
                    else
                    {
                        printf("|");
                    }
                }
            }
        }
    printf("\n");
    
    return 0;
    

    
    
}













