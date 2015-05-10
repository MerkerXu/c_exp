#include <stdio.h>

int
main()
{
    int c, nl, ns, nt;

    nl = nt = ns = 0;
    
    while((c = getchar()) != EOF)
    {
        if(c == '\n')
            nl++;
        else if(c == ' ')
            ns++;
        else if(c == '\t')
            nt++;
    }

    printf("nl=%d,nt=%d,ns=%d\n", nl, nt, ns);

    return 0;
}
