#ifndef FIELD_H
#define EIELD_H

#include <iostream>
#include <string>
#include <vector>

namespace Field
{

class field
{
    // private member variables
    std::string fileName_;
    int pointNumber_;
    int fieldDimension_;
    double initialValue_;

    std::vector<double> fieldValue_;

    // disallow copy construct
    field(const field&);
    
    // disallow default bitwise assignment
    void operator=(const field&);

    public:
    //Constructors
        //constructors
        field(const std::string fileName, const int pointNumber, const int fieldDimension, const double initialValue);
        field(const std::string fileName, const int pointNumber, const int fieldDimension);
        //distructor
        virtual ~field();

    //menber functions
    virtual std::string getFileName(){
        return fileName_;
    }

    private: 
    // member functions
    

};

}// namespace Field
#endif