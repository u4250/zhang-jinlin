#include <iostream>
#include <string>
using namespace std;
class GradeBook

{
public:
        void setCoursename(string name)
        {
            courseName = name;
        }
        void setTeachername(string name)
		{
			teacherName=name;
		 } 
        string getCourseName() const
        {
            return courseName;
        }
        string getTeacherName() const
        {
            return teacherName;
        }
        void displayMessage()const
        {
            cout<<"welcome to the grade book for\n"<<getCourseName()<<"!"<<endl;
            cout<<"This course is presented by\n"<<getTeacherName()<<"!"<<endl;
        }
private:
       string courseName;
       string teacherName;
       string myGradeBook;
//       class GradeBookmyGradeBook;
};
int main()
{
	GradeBook myGradeBook;
//	string myGradeBook;
    string nameofCourse;
    string nameofTeacher;
    cout<<"Initial course name is:"<<myGradeBook.getCourseName()<<endl;
    cout<<"\nPlease enter the course name:"<<endl;
    getline(cin,nameofCourse);
    myGradeBook.setCoursename(nameofCourse);
    cout<<endl;
    myGradeBook.displayMessage();
    cout<<"This teacher name is:"<<myGradeBook.getTeacherName()<<endl;
    cout<<"\nPlease enter the teacher name:"<<endl;
    getline(cin,nameofTeacher);
    myGradeBook.setTeachername(nameofTeacher);
    cout<<endl;
    myGradeBook.displayMessage();
}

