void kik(int q1)

{
    char masgg[4][4];
   for (int j=0; j<4;j++){
    for (int i=0; i<4;i++){
        masgg[i-1][j]='*';
        masgg[i][j]='\n'; //создаем двумерный массив из * с \n на конце
    }
    }

   for (int j=0; j<4;j++){
       //for(int i=0;i<14;i++) printf(" ");
       setcur(14,q1+j); //делаем отступ для каждой строки
    for (int i=0; i<4;i++){
          printf(" "); // фигура смотрится шире
        printf("%c",masgg[i][j]); }}

}

