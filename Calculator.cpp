#include<iostream>
using namespace std; 
int main(){	int sel;
int a,b,ans;

cout<<"Choose an operation:"<<endl;
cout<<"[1] Addition"<<endl;	
cout<<"[2] Subtraction"<<endl;	
cout<<"[3] Multiplication"<<endl;	
cout<<"[4] Division"<<endl;	
cin>>sel;		

if(sel==1){	cout<<"Addition";	

cout<<endl;	cout<<"Enter a number:";
	cin>>a;	cout<<"Entet a number:";
		cin>>b;	ans=a+b;	
		cout<<"Answer:"<<ans;		}	
		
			if(sel==2){	cout<<"Subtractiom";	
			
			cout<<endl;	cout<<"Enter a number:";	
			cin>>a;	cout<<"Entet a number:";	
			cin>>b;	ans=a-b;	cout<<"Answer:"<<ans;		}		
			
			if(sel==3){	cout<<"Multiplication";	cout<<endl;	
			
			cout<<"Enter a number:";
				cin>>a;	
				
		    cout<<"Entet a number:"; 
			cin>>b;	ans=a*b;	
			cout<<"Answer:"<<ans;		}		
			
			if(sel==4){	cout<<"Division";	
			cout<<endl;	
			cout<<"Enter a number:";	
			cin>>a;	cout<<"Entet a number:";	
			cin>>b;	ans=a/b;	
			cout<<"Answer:"<<ans;		
			}					
				}
