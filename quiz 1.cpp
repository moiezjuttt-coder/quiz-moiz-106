#include <iostream>
using namespace std;

int main(){
	int N;
	cout<<" enter number for learners";
	cin>> N;
	
	int hours;
	double total, finaltotal;
	for (int i=1; i<=N; i++)
	cout<<"enter training hours for learner" << i << ":";
	cin>> hours;
	total = hours * 150;
	if (hours>20){
		finaltotal = total - (total * 0.10);
		 
		 } else {
			finaltotal = total;
		}
		cout<<"total fee for learner" << finaltotal << endl;
		return 0;
	}
	  

