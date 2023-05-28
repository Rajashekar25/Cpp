#include <iostream>
using namespace std;

class Time{
	private:
		float hours;
		float minutes;
	public:
		Time(float h, float m){
			hours = h;
			minutes = m;
		}
		void displayTime(){
			cout << "Time " <<hours<< " : " << minutes << endl;
		}
		void operator ++ (){
			++minutes;
		//	return *this;
		}
};

int main(){

	Time t1(12,35);
	t1.displayTime();
	Time t2(2,18);
	t2.displayTime();
	++t1;
	++t2;
	cout << "After Increment" << endl;
	t1.displayTime();
	t2.displayTime();

	return 0;

}
