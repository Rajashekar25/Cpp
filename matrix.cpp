#include <iostream>
#include <cstdlib>
using namespace std;
#define N 3

class Matrix
{
    private:
        int a[N][N];
    public:
        void setData(){
//	    srand(123);
	    for(int i=0; i<N; i++){
	        for(int j=0; j<N; j++){
		    a[i][j]=rand()%100;
		}
	    }
	}
	void displayData(){
	    for(int i=0; i<N; i++){
	        for(int j=0; j<N; j++){
	    	    cout<<a[i][j]<<" ";
	        }
    		cout<<endl;
	     }
	}
	Matrix operator + (Matrix b){
	    Matrix c;
	    for(int i=0; i<N; i++){
	        for(int j=0; j<N; j++){
		    c.a[i][j] = a[i][j] + b.a[i][j];
		}
	    }
	    return c;
	}
	Matrix operator - (Matrix b){
	    Matrix d;
	    for(int i=0; i<N; i++){
	        for(int j=0; j<N; j++){
		    d.a[i][j] = a[i][j] - b.a[i][j];
		}
	    }
	    return (d);
	}
	bool operator == (Matrix b){
	    bool out = true;
	    for(int i=0; i<N; i++){
	        for(int j=0; j<N; j++){
		    if(a[i][j] != b.a[i][j]){
		        return false;
		    }
		}
	    }
	    return (out);
	}
};

int main(){

    Matrix M1,M2,M3;
    bool check;
//    M3 = M1 + M2;
    M1.setData();
    cout<<"-----M1 Matrix------"<<endl;
    M1.displayData();
    M2.setData();
    cout<<"-----M2 Matrix------"<<endl;
    M2.displayData();
    M3 = M1 + M2;
    cout<<"-----After Addition------"<<endl;
    M3.displayData();
    M3 = M1 - M2;
    cout<<"-----After Subtraction-----"<<endl;
    M3.displayData();
    check = M1 == M1;
    cout << "Comparison "<< check << endl;

    return 0;
}
