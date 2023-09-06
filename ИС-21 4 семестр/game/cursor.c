void setcur(int x,int y) //позволяет поставить курсор в любое место, но работает только для одной строки
{
    COORD coord;
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
