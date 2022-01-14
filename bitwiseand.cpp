#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
bool bitwise(int a,int b){
	cout<< (a & b);
	if(a & b == 0){return true; }
	return false;

}
int main(){
 try{
	int n;
	cin>>n;
	if(n>1080){throw -1;}
	while(n--){
	int a,b,c;
	cin>>a>>b>>c;
	if(cin.fail()||a>pow(10,4)||b>pow(10,4)||c>pow(10,4)){
        throw -1;
    }
	int ans = a&b&c;
	if(ans == 0) cout<<"YES\n";
	else{cout<<"NO\n";}
}
}
catch(...){
    cout << "Invalid Input. Please Check The Question Description." << endl;
    return 0;

}

}