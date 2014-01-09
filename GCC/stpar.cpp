//
#include<iostream>
#include<stack>
using namespace std;
main(){
	int t, i;
	int out, top, in, next;
	cin>>t;
	while(t != 0){
		stack<int> trucks;
		int flag = 0;
		out = 0;
		cin>>in;
		for(i = 1; i < t; i++){
			cin>>next;
			if(flag == 1){
				continue;
			}
			if(in > next){
				if(trucks.size() == 0){
					trucks.push(in);
				}
				else{
					while(trucks.size() > 0 && trucks.top() < in){
						if(out > trucks.top()){
							flag = 1;
							break;
						}
						out = trucks.top();
						trucks.pop();
					}
					trucks.push(in);
				}
				if(out > in){
					flag = 1;
					//break;
				}
				else{
					//out = in;
					in = next;
				}
			}
			else{
				while(trucks.size() > 0 && trucks.top() < in){
					if(out > trucks.top()){
						flag = 1;
						break;
					}
					out = trucks.top();
					trucks.pop();
				}
				if(out > in){
					flag = 1;
					//break;
				}
				else{
					out = in;
					in = next;
				}
			}
		}
		if(trucks.size() > 0 && trucks.top() > in){
			if(out > in){
				flag = 1;
			}
			else{
				out = in;
				//in = next;
			}
		}
		while(trucks.size() > 0 && trucks.top() < in){
			if(out > trucks.top()){
				flag = 1;
				break;
			}
			out = trucks.top();
			trucks.pop();
		}
		if(flag == 0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	
		cin>>t;
	}
}
