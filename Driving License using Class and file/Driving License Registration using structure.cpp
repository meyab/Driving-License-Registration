#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

struct personal_info
{
	string Fname;
	string Phone_no;
    string date_of_begining;
	short Age;
	short Edu_level;
	short Past_exp;
	short course_type;
};
//global var
string course_type[9]{ {"Automobile"},
                    {"Hizb-1"},
                    {"Derek-1"},
                    {"Hizb-2"},
                    {"Derek-2"},
                    {"Fesash-1"},
                    {"Hizb-3"},
                    {"Derek-3"},
                    {"Fesash-2"} };
short fNamewidth=10;
short year=2014;
short course_no;
short sta_month;

void Pers_info(personal_info &p);
void sta_date_cal(personal_info &p);
void display(personal_info p);
