#include <stdio.h>
#include <string.h>
#include <windows.h>

#include "line.c"
#include "chik.c"
#include "chik2.c"
#include "cursor.c"
#include "doo.c"
#include "jump.c"


#define h1 12
#define h2 15
#define w1 80

char mas1[h1][w1+1];
char mas2[h2][w1+1];

void init1();
void show1();
void newSnow1();
void moveSnow1();
void init2();
void show2();
void newSnow2();
void moveSnow2();

void pr();

int main()
{

   init1();
   init2();
   lin1(); //рисует 2 границы

    int r=1;
    do {
if (GetKeyState(VK_RCONTROL) !=0) r=1; else r=0; //запуск и остановка левым контролом
 if (r==1)
   {
       do1(); //запуск снега

     // изначальное положение фигуры
     kik(15);


     //setcur(0,15);
    //  pr();

     space(); //прыжок фигуры

     Sleep(100); //залипание

   }
   } while (GetKeyState(VK_ESCAPE)>=0); // нажатие кнопки ескейп завершает игру

    return 0;
}



void init1()
{
    for (int i=0; i<w1;i++)
        mas1[0][i] =' ';
    mas1[0][w1] ='\0';
    for (int i=1; i<h1; i++)
    sprintf(mas1[i], mas1[0]);
}

void show1()
{
    mas1[h1-1][w1-1]='\0';
    for  (int i=0; i<h1; i++)
    printf(mas1[i]);
}

void newSnow1()
{
    for (int i=0; i<w1; i++)
        if (rand() %10 ==1)
        mas1[0][i] = '*';

}
void moveSnow1()
{
    int dx;
    for (int j=h1-1; j>=0; j--)
        for (int i=0; i<w1; i++)
        if (mas1[j][i] == '*')
    {
        mas1[j][i]=' ';
        dx=0;
        if (rand()%10<1) dx++;
        if (rand()%10<1) dx--;
        dx+=i;
        if (dx>=0 && (dx<w1) && (j+1<h1))
           mas1[j+1][dx] ='*';
    }
}

void init2()
{
    for (int i=0; i<w1;i++)
        mas2[0][i] =' ';
    mas2[0][w1] ='\0';
    for (int i=1; i<h2; i++)
    sprintf(mas2[i], mas2[0]);
}

void show2()
{
    mas2[h2-1][w1-1]='\0';
    for  (int i=0; i<h2; i++)
    printf(mas2[i]);
}

void newSnow2()
{
    for (int i=0; i<w1; i++)
        if (rand() %10 ==1)
        mas2[0][i] = '*';

}
void moveSnow2()
{
    int dx;
    for (int j=h2-1; j>=0; j--)
        for (int i=0; i<w1; i++)
        if (mas2[j][i] == '*')
    {
        mas2[j][i]=' ';
        dx=0;
        if (rand()%10<1) dx++;
        if (rand()%10<1) dx--;
        dx+=i;
        if (dx>=0 && (dx<w1) && (j+1<h2))
           mas2[j+1][dx] ='*';
    }
}

/*
void pr(){ // хрен его знает, надо доделать
    char masgg[4][4];
   for (int j=0; j<4;j++){
    for (int i=0; i<4;i++){
        masgg[i-1][j]='*';
        masgg[i][j]='\n'; //создаем двумерный массив из * с \n на конце
    }
    }

   for (int j=0; j<4;j++){
       for(int i=0;i<76;i++) printf(" "); //делаем отступ для каждой строки
    for (int i=0; i<4;i++){
          printf(" "); // фигура смотрится шире
        printf("%c",masgg[i][j]); }}
} */

