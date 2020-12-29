#ifndef POINTS_H
#define POINTS_H

#include <vector>

namespace Field{
class points
{
    // private member variables
    int pointsNumber_;
    int Dimensions_;
    std::vector<double> coordinates_;

    // disallow copy construct
    points(const points&);
    
    // disallow default bitwise assignment
    void operator=(const points&);

    public:
    //Constructors
    //constructors
    points(const int pointsNumber, const int Dimensions);
    //distructor
    virtual ~points();

    //menber functions
    //getters
    virtual std::vector<double> getCoordinates(){
        return coordinates_;
    }
    //setters
    virtual void setCoordinates(const int i, const double value){
        coordinates_[i] = value;
    }

    private: 
    // member functions
    

};

}// namespace Field
#endif