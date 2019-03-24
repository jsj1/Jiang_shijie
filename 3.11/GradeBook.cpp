
    str#include <string>

#include <iostream>
#include"GradeBook.h"
using namespace std;
GradeBook::GradeBook(string name1,string name2)
  {
    CourseName = name1;
    TeacherName = name2;
  }
   void GradeBook::setCoursename(string name1)
    {
        CourseName = name1;
    }
    string GradeBook::getCourseName() const

    {
        return CourseName;
    }



    void GradeBook::setTeachername(string name2)
    {
        TeacherName = name2;
    }ing GradeBook::getTeacherName() const
    {
        return TeacherName;

    }
    void GradeBook :: displayMessage()const
    {
        cout << "welcome to the grade book for:"<< getCourseName()<<"!"<<"\nThis Course is presented by:"<<getTeacherName()<<endl;

    }
