#include "points.hpp"

// Constructors
Field::points::points
(
    const int pointsNumber,
    const int Dimensions
):
    pointsNumber_(pointsNumber),
    Dimensions_(Dimensions)
{
    int valueNumber = Dimensions_*pointsNumber;
    coordinates_.assign(valueNumber,0.0);
}

// Destructors
Field::points::~points()
{
    coordinates_.clear();
}
//

// member function