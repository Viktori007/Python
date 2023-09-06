void kik2(int q2)

{
    char masgg[4][4];
   for (int j=0; j<4;j++){
    for (int i=0; i<4;i++){
        masgg[i-1][j]=' ';
        masgg[i][j]='\n'; //создаем тот же массив , но пустой
    }
    }

   for (int j=0; j<4;j++){
       //for(int i=0;i<14;i++) printf(" ");
     setcur(14,q2+j);
    for (int i=0; i<4;i++){
          printf(" "); // фигура смотрится шире
        printf("%c",masgg[i][j]); }}
}
