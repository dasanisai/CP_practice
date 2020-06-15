
#include<bits/stdc++.h> 
using namespace std;

int main () 
{ 
	vector<int> vec; 
	int x,n,i,t,temp,f=1;
	cin>>x>>n;
	temp=x;
	

	vector<int>::iterator it; 
	
	vector<int>::iterator it1; 
	
	for (int i=0; i<n; i++) {
		cin>>t; 
		vec.push_back(t);
	
	}
	if(n==0){
	    cout<<x;
	    
	}
	else{
	while(f){
	
	it = find (vec.begin(), vec.end(), x); 
	
	it1 = find (vec.begin(), vec.end(), temp); 
	if (it1 != vec.end()) 
	{ 
		 
		temp--;
		 
	} 
	
	else{
		cout << temp<<endl;
		break;
	}
	if (it != vec.end()) 
	{ 
		
		
		 x++;
	} 
	else{
		cout<<x<<endl; 
		break;
	}
		
}
}return 0; 
} 
