

/* testing if graphics is working
#include<graphics.h>

main()
{
	initwindow(800,800);
	
	line(200,210,400,410);
	
	putpixel(100,100,GREEN);
	
	putpixel(100,101,GREEN);
	
	putpixel(100,102,GREEN);
	
	circle(300,300,20);
	
	getch();
	

}


*/



#include<iostream>
#include<math.h>
#include <iomanip>
#include<graphics.h>
using namespace std;





void drawLine(int x1,int y1,int x2,int y2){//window is pass by reference
    float dx,dy,lenx,leny,nextX=x1,nextY=y1;//x1,y1 is used to get the next point that needs to be lit
    cout<<setprecision(1)<<fixed;

    dx=(float)x2-x1;
    dy=(float)y2-y1;

    cout<<"dx:"<<dx<<"dy:"<<dy<<"\n";

    lenx=dx/dy;
    leny=dy/dy;
    cout<<"lenx:"<<lenx<<"leny:"<<leny<<"\n";

    putpixel(x1,y1,GREEN);//plot first pixel coordinates before calculating next pixel
    
    cout<<"x:"<<x1<<"y:"<<y1<<"\n";

    while(x1<x2 || y1<y2)
    {
            nextX=nextX+lenx;
            nextY=nextY+leny;


            x1=floor(nextX);
            y1=floor(nextY);
            cout<<"x:"<<x1<<"y:"<<y1<<"\n";

            //window[y1][x1]=1;
            putpixel(x1,y1,GREEN);
    }
    getch();

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





 main(){
	
	initwindow(800,800);
	
    int window[100][100]={0};
    
    int x=0;
    
    do{
    	/*
    	Window divided into 9 sub windows
         _____
    	|1|2|3|
    	|4|5|6|
    	|7|8|9|
    	
    	*/
    	
    	cout<<"\n 1.Draw Line.\n 2.Make Window 5 active.\n";
    	
    	cin>>x;
    	
    	
    	switch(x){
    		
    		case 0:{
    			
				break;
			}
    		
    		case 1:{
    			//open new window each time
    			int x1,x2,y1,y2;
    			cout<<"\n Enter x1 and y1 coordinates:";
    			cin>>x1>>y1;
    			cout<<"\n Enter x2 and y2 coordinates:";
    			cin>>x2>>y2;
    			
    			drawLine(x1,y1,x2,y2);
    			//getch();
    			
				break;
			}
			case 2:{
				
				break;
			}
			default :{
				cout<<"\n invalid input";
				break;
			}
		}
    	
    	
    	
    	
	}while(x!=0);//exit from the code
    

    
    //drawGraphics(window);

   //displayWindowCenterWindow(window);
    //displayWindowOneWindow(window);
    //displayWindowNineWindow(window);
    //displayWindowOne_NineWindow(window);





    //int drawLine [5]={21};


	
	


}


