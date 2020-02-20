#include <windows.h>
#include <commctrl.h>
//#include <stdio.h>
#include "resource.h"

#include<graphics.h>
#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"hhhhh";
    int gd=DETECT,gm;
    char a[ ] = " ";
    initgraph(&gd,&gm, a);
    circle(200,200,100);
    cin>>n;
    //getch();
    //closegraph();
    return 0;
}
