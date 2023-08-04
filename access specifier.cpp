#include<iostream>
using namespace std;

class student
{
	public:
		
		string name;
		int attendence;
		float total_marks;
		
		void calculate_percentage()
		{
			cout<<total_marks<<"%";
		}
};
int main()
{
	student a,b,c;
	//student is class
	//a,b,c are objects
	a.name="hari";
	a.attendence=90;
	a.total_marks=69;
	
	a.calculate_percentage();
	
	
	return 0;
}

