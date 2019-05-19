#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
#include <string>

class PhoneNumber
{
    public:
        friend std::ostream &operator<<(std::ostream &,const PhoneNumber &);
        friend std::ostream &operator>>(std::ostream &,PhoneNumber &);

    private:
        std::string areaCode;
        std::string exchange;
        std::string line;
        
};

#endif // PHONENUMBER_H

