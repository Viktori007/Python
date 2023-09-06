//узнает  знак зодиака по дню и месяцу рождения
#include <stdio.h>
#include <stdlib.h>
#include "data.c"
#include "znak.c"
int main()
{
    int d,m;
    scanf("%d.%d",&d,&m);
    dat(d,m);
    znak_zodiaka(d,m);
    return 0;
}
