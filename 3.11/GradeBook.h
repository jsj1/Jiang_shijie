#ifndef GRADEBOOK_H_INCLUDED
#define GRADEBOOK_H_INCLUDED

#include <string>
#include <string>
class GradeBook
{
public:
    explicit GradeBook(std::string,std::string);
    void setCoursename(std::string);
    std:: string getCourseName()const;
    void setTeachername(std::string);
    std:: string getTeacherName()const;
    void displayMessage() const;
private:
  std::string CourseName;
  std::string TeacherName;
};


#endif // GRADEBOOK_H_INCLUDED
