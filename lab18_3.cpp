#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

vector<int> randomVector(int N){
	vector<int> v;
    for(unsigned int i = 0; i < N; i++) v.push_back(rand()%10);
    return v;

}

int dotProduct(vector<int> A,vector<int> B){
	int sum = 0;
	for(unsigned int i = 0; i < A.size(); i++) sum += A[i]*B[i];	
	return sum;
}

void showVector(vector<int> W){
	cout << "[";
	for(unsigned int i = 0; i < W.size(); i++){
		cout << W[i];
		if(i == W.size()-1) cout << "]";
		else cout << " ";
	}
}


