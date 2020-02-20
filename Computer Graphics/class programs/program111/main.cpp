#include<graphics.h>
#include<iostream>
using namespace std;

int main(){

    cout<<"hhhhh";
    int gd=DETECT,gm;
    char a[ ] = " ";
    initgraph(&gd,&gm, a);
    circle(200,200,100);

    getch();
    closegraph();
    return 0;
}
