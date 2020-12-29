#include "field.hpp"
//#include "points.hpp"

// Constructors
Field::field::field
(
    const std::string fileName,
    const int pointNumber,
    const int fieldDimension,
    const double initialValue,
    Field::points* points
):
    fileName_(fileName),
    pointNumber_(pointNumber),
    fieldDimension_(fieldDimension),
    initialValue_(initialValue),
    points_(points)
{
    int valueNumber = pointNumber*fieldDimension;
    fieldValue_.assign(valueNumber, initialValue);
}


// Destructors
Field::field::~field()
{
    fileName_.clear();
}
//

// member function
