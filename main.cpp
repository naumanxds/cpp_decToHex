#include<iostream>
using namespace std; 
int main(){
	int a,x;
	string str="";
	cout<<"\nenter a number";
	cin>>a;
	for(;a/16!=0;){
		x=a/16;
		
		if(x==10){
			str= "A"+str;
		}
		else if(x==11){
			str= "B"+str;
		}
		else if(x==12){
			str= "C"+str;
		}
		else if(x==13){
			str= "D"+str;
		}
		else if(x==14){
			str= "E"+str;
		}
		else if(x==15){
			str= "F"+str;
		}
		else{
			str= ""+a+str;
		}
		a=a%16;	
	}
	cout<<"\nHEX value  = "<<str;
	return 0;
}
