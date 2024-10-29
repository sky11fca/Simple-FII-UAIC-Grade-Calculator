#include "../headers/StudentLICS.h"

StudentLICS::StudentLICS(std::string fname, std::string lname, int Midterm, int Session, int Bonus)
{
	this->fname=fname;
	this->lname=lname;
	this->Midterm=Midterm;
	this->Session=Session;
	this->Bonus=Bonus;
	Passed=false;
}

std::string StudentLICS::getFname()
{
	return fname;
}

std::string StudentLICS::getLname()
{
	return lname;
}

bool StudentLICS::is_Passed()
{
	if(Midterm+Session>=50)
	{
		Passed=true;
	}
	else Passed=false;
	return Passed;
}
