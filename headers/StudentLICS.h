#include <string>
#include <cstdio>
#include <iostream>

class StudentLICS
{
	private:
		std::string fname;
		std::string lname;
		int Midterm;
		int Session;
		int Bonus;
		bool Passed;
	public:
		StudentLICS(std::string fname,std::string lname, int Midterm, int Session, int Bonus);
		std::string getFname();
		std::string getLname();
		bool is_Passed();
};
