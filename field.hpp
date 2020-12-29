#ifndef FIELD_H
#define EIELD_H

#include <iostream>
#include <string>
#include <vector>
#include "points.hpp"

namespace Field
{

class field
{
    // private member variables
    std::string fileName_;
    int pointNumber_;
    int fieldDimension_;
    double initialValue_;
    Field::points* points_;

    std::vector<double> fieldValue_;

    // disallow copy construct
    field(const field&);
    
    // disallow default bitwise assignment
    void operator=(const field&);

    public:
    //Constructors
        //constructors
        field(const std::string fileName, const int pointNumber, const int fieldDimension, const double initialValue, Field::points* points_);
        //distructor
        virtual ~field();

    //menber functions
    //getters
    virtual std::string getFileName(){
        return fileName_;
    }

    virtual Field::points* getPoints(){
        return points_;
    }
    
    virtual std::vector<double> getFieldValue(){
        return fieldValue_;
    }
    //setters
    virtual void setFieldValue(const int i, const double value){
        fieldValue_[i] = value;
    }
    
    private: 
    // member functions

};

}// namespace Field
#endif