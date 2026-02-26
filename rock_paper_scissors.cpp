#include<iostream>
#include<ctime>
#include <cstdlib>
using namespace std;
int main()
{
while(true){

int user;
string n,N;
cout<<"enter 1 for rock\nenter 2 for scissors\nenter 3 for paper\n";
cin>>user;
while(user<1||user>3){
	cout<<"invalid value, try again\n";
	cout<<"enter 1 for rock\nenter 2 for scissors\nenter 3 for paper\n";
	cin>>user;
}
  while(true){switch(user){
	case 1: n="Rock";break ;
	case 2: n="Scissors";break ;
	case 3: n="Paper";break ;
}
cout<<"you chose "<<n<<"\n";
srand(time(0));
int comp= (rand() % 3) + 1;
switch(comp){
	case 1: N="Rock";break ;
	case 2: N="Scissors";break ;
	case 3: N="Paper";break ;}
	cout<<"computer chooses "<<N<<"\n";

	if(user == comp){
	cout<<"its a tie";
	}
	
	else if(user==1 &&comp==2)
	{cout<<"u wins\n";
	}
	else if(user==1&&comp==3)
	{cout<<"computer wins\n";
	}
	else if(user==2&&comp==1)
	{cout<<"computer wins\n";
	}
	else if(user==2&&comp==3)
	{cout<<"u wins\n";
	}
	else if(user==3&&comp==1)
	{cout<<"u wins\n";
	}
	else if(user==3&&comp==2)
	{cout<<"computer wins\n";
	}
	break ;
}
int a;
cout<<"\nenter 1 if u wanna play again\n";
cin>>a;
if(a!=1){break;}
}}


