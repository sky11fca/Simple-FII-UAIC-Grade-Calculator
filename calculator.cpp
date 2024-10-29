#include "headers/StudentLICS.h"

int main()
{
	FILE *fd=fopen("test/records.txt", "r");
	
	char line[256];
	std::string fname;
	std::string lname;
	char fname_c[100];
	char lname_c[100];
	int Midterm;
	int Session;
	int Bonus;

	while(fgets(line, 256, fd))
	{
		sscanf(line, ": %s : %s : %d : %d : %d :", fname_c, lname_c, &Midterm, &Session, &Bonus);
		fname=std::string(fname_c);
		lname=std::string(lname_c);
		StudentLICS student(fname, lname, Midterm, Session, Bonus);

		if(student.is_Passed())
		{
			printf("Student %s %s passed Logic in Computer Science with %d, points\n", fname_c, lname_c, Midterm+Session+Bonus);
		}else
		{
			printf("Student %s %s failed the subject: %d from 50\n", fname_c, lname_c, Midterm+Session);
		}
	}

	fclose(fd);
}
