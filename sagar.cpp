#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream>
#include<fstream>
using namespace std;

class Player
{  
	public:
		int num;
		int get_data(){
		
		cout<<"**************************"<<endl;
		cout<<"**************************"<<endl;
		cout<<"1.SACHIN TENDULKAR"<<endl;
		cout<<"2.VIRAT KOHLI"<<endl;
		cout<<"3.V SHEWAG"<<endl;
		cout<<"4.ANDRE RUSSEL"<<endl;
		cout<<"5.MS DHONI"<<endl;
		cout<<"6.GAMBHIR"<<endl;
		cout<<"7.ROSS TAYLOR"<<endl;
		cout<<"8.DAVID WARNER"<<endl;
		cout<<"9.SANGAKARRA"<<endl;
		cout<<"10.CHATESHWAR PUJARA"<<endl;
		cout<<"choose a player for his individual score ";
		cin>>num;
	}
	   void Check(){
	   
		if(num>10)
		{
			cout<<"choose accordingly";
		}
		else
		{
			cin>>num;
	}	}
};

class Information:public Player
{
	public:
		void Random()
{
				switch(num)
		{
			case 1:
				cout<<"*******SACHIN TENDULKAR*******"<<endl;
				cout<<"age is 42"<<endl;
				cout<<"TOTAL RUNS  25000"<<endl;
				cout<<"TOTAL WICKETS  86"<<endl;
				cout<<"TOTAL CATCHES  128"<<endl;
				break;
			case 2:
				cout<<"*******VIRAT KOHLI*******"<<endl;
				cout<<"age is 29"<<endl;
				cout<<"TOTAL RUNS  18000"<<endl;
				cout<<"TOTAL WICKETS  35"<<endl;
				cout<<"TOTAL CATCHES  154"<<endl;
				break;
			case 3:
				cout<<"*******V SHEWAG*******"<<endl;
				cout<<"age is 43"<<endl;
				cout<<"TOTAL RUNS 21000"<<endl;
				cout<<"TOTAL WICKETS  92"<<endl;
				cout<<"TOTAL CATCHES  111"<<endl;
				break;
			case 4:
				cout<<"*******ANDRE RUSSEL*******"<<endl;
				cout<<"age is 30"<<endl;
				cout<<"TOTAL RUNS  9800"<<endl;
				cout<<"TOTAL WICKETS  109"<<endl;
				cout<<"TOTAL CATCHES  87"<<endl;
				break;
			case 5:
				cout<<"*******MS DHONI*******"<<endl;
				cout<<"age is 30"<<endl;
				cout<<"TOTAL RUNS  19000"<<endl;
				cout<<"TOTAL WICKETS  00"<<endl;
				cout<<"TOTAL CATCHES  999"<<endl;
				break;
			case 6:
				cout<<"*******GOWTHAM GAMBHIR*******"<<endl;
				cout<<"age is 41"<<endl;
				cout<<"TOTAL RUNS  12000"<<endl;
				cout<<"TOTAL WICKETS  12"<<endl;
				cout<<"TOTAL CATCHES  80"<<endl;
				break;
			case 7:
				cout<<"*******ROSS TAYLOR*******"<<endl;
				cout<<"age is 30"<<endl;
				cout<<"TOTAL RUNS  11000"<<endl;
				cout<<"TOTAL WICKETS  00"<<endl;
				cout<<"TOTAL CATCHES  102"<<endl;
				break;
			case 8:
				cout<<"*******DAVID WARNER*******"<<endl;
				cout<<"age is 30"<<endl;
				cout<<"TOTAL RUNS 9000"<<endl;
				cout<<"TOTAL WICKETS  00"<<endl;
				cout<<"TOTAL CATCHES  145"<<endl;
				break;
			case 9:
				cout<<"*******SAANGAKARRA*******"<<endl;
				cout<<"age is 43"<<endl;
				cout<<"TOTAL RUNS  25000"<<endl;
				cout<<"TOTAL WICKETS  21"<<endl;
				cout<<"TOTAL CATCHES  232"<<endl;
				break;
			case 10:
				cout<<"*******CHATESHWAR PUJARA*******"<<endl;
				cout<<"age is 30"<<endl;
				cout<<"TOTAL RUNS  8000"<<endl;
				cout<<"TOTAL WICKETS  00"<<endl;
				cout<<"TOTAL CATCHES  40"<<endl;
				break;
	}	}
};
class File
{ char player_name[60];
  int runs;
	public:
		void handling()
		{
          	ofstream st;
			  st.open("Documents:\b.txt",ios::out);
			  
			  cout<<"enter your choice"<<endl;
			  cout<<"player_name: "<<endl;
			  cin>>player_name;
			  cout<<"runs: ";
			  cin>>runs;
			  st<<player_name;
			  st<<runs<<endl;
			  cout<<"successfully updated"<<endl;
			  st.close();
			  ifstream st2;
			  st2.open("Documents:\b.txt",ios::in);
			  st2>>player_name;
			  st2>>runs;
			  cout<<player_name<<endl;
			  cout<<runs<<endl;
			  st2.close();
			  	
		}
};


  int main()
  {
  	int a;
  	
  	Information obj2;
  	obj2.get_data();
  	obj2.Random();
  	cout<<"*******"<<endl;
  	cout<<"*******"<<endl;
  	cout<<"update details.Press 1 to update"<<endl;
  	cin>>a;
  	if(a=1)
  	{
  		File obj3;
  		obj3.handling();
	  }
	else
	{
		cout<<"unknown answer"<<endl;
	}
  	
  	
  	
  	cout<<"HOPE YOU HAVE SOME USEFUL INFO"<<endl;
  	cout<<"THANK YOU VISIT AGAIN";
  	
  
  	
  }

