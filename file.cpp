#include<iostream>



void gotoxy(int x, int y)

{

    COORD ord;

    ord.X = x;

    ord.Y = y;

    SetConsoleCursorPosition

    (GetStdHandle(STD_OUTPUT_HANDLE),ord);
}

void Draw_Line(int left, int top,

int right, int bottom)

{

    double m = ((double) bottom - top)/

    ((double)right - left);

    for(int x = left; x<=right; x++)
    {

        int y=m*(x-left)+top;

        gotoxy(x,y);
        std::cout<<"x";

        //      std::cout<<"X";std::cout<<x;

        //      std::cout<<"Y";std::cout<<y;

        //      std::cout<<std::endl;

    }
}

void main()

{
    Draw_Line(0,0,6,3);

    gotoxy(0,0);
}