#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;





void getLineCoordinates(int x1,int y1,int x2,int y2,int window[100][100]){//window is pass by reference
    float dx,dy,lenx,leny,nextX=x1,nextY=y1;//x1,y1 is used to get the next point that needs to be lit
    cout<<setprecision(1)<<fixed;

    dx=(float)x2-x1;
    dy=(float)y2-y1;

    cout<<"dx:"<<dx<<"dy:"<<dy<<"\n";

    lenx=dx/dy;
    leny=dy/dy;
    cout<<"lenx:"<<lenx<<"leny:"<<leny<<"\n";

    window[y1][x1]=1;//lit start point before the loop
    cout<<"x:"<<x1<<"y:"<<y1<<"\n";

    while(x1<x2 || y1<y2)
    {
            nextX=nextX+lenx;
            nextY=nextY+leny;


            x1=floor(nextX);
            y1=floor(nextY);
            cout<<"x:"<<x1<<"y:"<<y1<<"\n";

            window[y1][x1]=1;
    }

}



void displayWindowCenterWindow(int window[100][100]){

    int window5Xmin=20;
    int window5Xmax=39;
    int window5Ymin=20;
    int window5Ymax=39;

    int x=21;
    int y=35;

    for(int n=0;n<60;n++)
    {
        for(int m=0;m<60;m++){
            if(window5Xmin<n && n<window5Xmax && window5Ymin<m && m<window5Ymax){
                    if((m==x && m==x) && (n==y && n==y)){
                        cout<<"&";
                    }else{
                        cout<<"*";
                    }

            }else
            {
                cout<<" ";
            }

        }
        cout<<"\n";



    }


}



void displayWindowNineWindow(int window[100][100]){

    int window5Xmin=20;
    int window5Xmax=39;
    int window5Ymin=20;
    int window5Ymax=39;

    int x=21;
    int y=35;

    for(int n=0;n<60;n++)
    {
        for(int m=0;m<60;m++){
            if(m>window5Xmax &&n>window5Ymax){
                        cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";



    }


}

void displayWindowOneWindow(int window[100][100]){

    int window5Xmin=20;
    int window5Xmax=39;
    int window5Ymin=20;
    int window5Ymax=39;

    int x=21;
    int y=35;

    for(int n=0;n<60;n++)
    {
        for(int m=0;m<60;m++){
            if(m<window5Xmin &&n<window5Ymin){
                        cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";



    }


}


void displayWindowOne_NineWindow(int window[100][100]){

    int window5Xmin=20;
    int window5Xmax=39;
    int window5Ymin=20;
    int window5Ymax=39;

    int x=21;
    int y=35;

    for(int n=0;n<60;n++)
    {
        for(int m=0;m<60;m++){
            if((m<window5Xmin &&n<window5Ymin) ||(m>window5Xmax &&n>window5Ymax)){
                        cout<<"*";

            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";



    }


}

void displayWindowThreeWindow(int window[100][100]){

    int window5Xmin=20;
    int window5Xmax=39;
    int window5Ymin=20;
    int window5Ymax=39;

    int x=21;
    int y=35;

    for(int n=0;n<60;n++)
    {
        for(int m=0;m<60;m++){
            if(m>window5Ymax && n>window5Xmax){
                        cout<<"&";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<"\n";



    }


}



void drawGraphics(int window[100][100]){

     for(int n=0;n<60;n++)
    {
        for(int m=0;m<60;m++){
            if(window[n][m]==1){

                cout<<"*";


            }else
            {
                cout<<" ";
            }

        }
        cout<<"\n";



    }

}





int main(){
    int window[100][100]={0};

    //getLineCoordinates(7,9,15,25,window);

    //getLineCoordinates(7,15,7,30,window);

    //getLineCoordinates(7,15,50,30,window);

    //getLineCoordinates(4,8,6,14,window);

    getLineCoordinates(1,5,41,45,window);

    drawGraphics(window);

   //displayWindowCenterWindow(window);
    //displayWindowOneWindow(window);
    //displayWindowNineWindow(window);
    //displayWindowOne_NineWindow(window);





    int drawLine [5]={21};




}

