#include <stdio.h>
#include<string.h>

main ()
{
    char n1[15], n2[15], n3[15];
    gets (n1);
    gets (n2);
    gets (n3);
    if (strcmp (n1, "vertebrado")==0)
    {
        if (strcmp (n2, "ave")==0)
        {
            if (strcmp (n3, "carnivoro")==0)
            {
                printf ("aguia\n");
            }
            if (strcmp (n3, "onivoro")==0)
            {
                printf ("pomba\n");
            }
        }
    }
    if (strcmp (n1, "vertebrado")==0)
    {
        if (strcmp (n2, "mamifero")==0)
        {
            if (strcmp (n3, "onivoro")==0)
            {
                printf ("homem\n");
            }
            if (strcmp (n3, "herbivoro")==0)
            {
                printf ("vaca\n");
            }
        }
    }

    if (strcmp (n1, "invertebrado")==0)
    {
        if (strcmp (n2, "inseto")==0)
        {
            if (strcmp (n3, "hematofago")==0)
            {
                printf ("pulga\n");
            }
            if (strcmp (n3, "herbivoro")==0)
            {
                printf ("lagarta\n");
            }
        }
    }
    if (strcmp (n1, "invertebrado")==0)
    {
        if (strcmp (n2, "anelideo")==0)
        {
            if (strcmp (n3, "hematofago")==0)
            {
                printf ("sanguessuga\n");
            }
            if (strcmp (n3, "onivoro")==0)
            {
                printf ("minhoca\n");
            }
        }
    }
    return 0;
}
