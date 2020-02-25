#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d){
	int x,y;
	x=rand()%6;
switch(x){
case 0: y=*a;*a=*b;*b=y;
break;
case 1: y=*a;*a=*c;*c=y;
break;
case 2: y=*a;*a=*d;*d=y;
break;
case 3: y=*b;*b=*c;*c=y;
break;
case 4: y=*b;*b=*d;*d=y;
break;
case 5: y=*c;*c=*d;*d=y;
break;
}
}

