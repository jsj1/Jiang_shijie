//Fig.10.3:PhoneNumber.h
//phoneNumber class definition
#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

class phoneNumber
{
    friend std::ostream &operator<<(std::ostream &,const phoneNumber &);
    friend std::istream &operator>>(std::istream &,phoneNumber &);

private:
    std::string areaCode;//3-digit area code
    std::string exchange;//3-digit exchange
    std::string line;//4-digit line
};//end class phoneNumber
#endif
