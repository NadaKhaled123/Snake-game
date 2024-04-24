#include<iostream>
#include<ctime>
#include <conio.h>
#include <windows.h>
using namespace std;
struct map{	int width,height,fruitx,fruity;};
struct snake{int headx,heady,tail_n;};
struct player{int score; bool lose;};
map map1; snake snake1 ; player player1;
int generatefruit { srand(time(NULL));
    map1.fruitx=rand()%(map1.width-2)+1;
    map1.fruity=rand()%(map1.height-2)+1;
    
	}
void setup(){
	map1.widt=40;
	map1.height=20;
	generate_fruit();
	snake1.headx=map.width/2;
	sanke1.heady=map.height/2;
	snake1.tail_n=0;
	player1.score=0;
	player1.lose=fales;	
}
void draw()
{
	for(int i=0;i<map1.height;i++){
	  for(int j=0;j<map1.width;i++){
	  	if(i==0||i=map1.height-1)cout<<"*";
	  	else if(j==0||j==map1.width-1)cout<<"*";
	  	else cout<<" ";
	  }
	  cout<<endl;
	      }
		  }
int main()
{
   setup();
   draw();
   system("pause");
   return 0;
}
