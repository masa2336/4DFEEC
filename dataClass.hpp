#ifndef DATACLASS_H
#define DATACLASS_H

#include <vector>

namespace data{
class dataClass
{
    // private member variables
    int CX_;
    int CY_;
    int CZ_;
    int NX_;
    int NY_;
    int NZ_;
    double deltaX_;
    double deltaY_;
    double deltaZ_;

    // disallow copy construct
    dataClass(const dataClass&);
    
    // disallow default bitwise assignment
    void operator=(const dataClass&);

    public:
    //Constructors
        //constructors
        dataClass();
        //distructor
        virtual ~dataClass();

    //menber functions
    //setters
    virtual void setCX(int CX){
        CX_ = CX;
    }
    virtual void setCY(int CY){
        CY_ = CY;
    }
    virtual void setCZ(int CZ){
        CZ_ = CZ;
    }
    virtual void setDeltaX(double deltaX){
        deltaX_ = deltaX;
    }
    virtual void setDeltaY(double deltaY){
        deltaY_ = deltaY;
    }
    virtual void setDeltaZ(double deltaZ){
        deltaZ_ = deltaZ;
    }
    
    //updates
    virtual void updateNodeNumber(){
        NX_ = CX_ + 1;
        NY_ = CY_ + 1;
        NZ_ = CZ_ + 1;
    }

    //getters
    virtual int getCX(){
        return CX_;
    }
    virtual int getCY(){
        return CY_;
    }
    virtual int getCZ(){
        return CZ_;
    }
    virtual int getNX(){
        return NX_;
    }
    virtual int getNY(){
        return NY_;
    }
    virtual int getNZ(){
        return NZ_;
    }
    virtual double getDeltaX(){
        return deltaX_;
    }
    virtual double getDeltaY(){
        return deltaY_;
    }
    virtual double getDeltaZ(){
        return deltaZ_;
    }
    private: 
    // member functions
    

};

}// namespace Field
#endif