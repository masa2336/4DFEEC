#include "field.hpp"

// Constructors
Field::field::field
(
    const std::string fileName,
    const int pointNumber,
    const int fieldDimension,
    const double initialValue
    
):
    fileName_(fileName),
    pointNumber_(pointNumber),
    fieldDimension_(fieldDimension),
    initialValue_(initialValue)
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
