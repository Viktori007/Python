
void dat(int den,int mes){
    if (den<10) printf("0%d.",den);
    if (den>=10) printf("%d.",den);

    if (mes<10)printf("0%d ",mes);
    if (mes>9) printf("%d ",mes);

}
