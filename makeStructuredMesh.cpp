#include "makeStructuredMesh.hpp"
#include "points.hpp"


// Constructors
Field::makeStructuredMesh::makeStructuredMesh
(
) //:
{
}

// Destructors
Field::makeStructuredMesh::~makeStructuredMesh()
{
}

// member function
void Field::makeStructuredMesh::makeStructuredPoints(data::dataClass& gdata, Field::field& field1)
{
    int NX = gdata.getNX();
    int NY = gdata.getNY();
    int NZ = gdata.getNZ();
    double deltaX = gdata.getDeltaX();
    double deltaY = gdata.getDeltaY();
    double deltaZ = gdata.getDeltaZ();

    int Dimensions = 3;
    for(int kk =0; kk < NZ;kk++){
        for(int jj =0; jj < NY;jj++){
            for(int ii =0; ii < NX;ii++){
                int Index = ii + jj*NX + kk * NX * NY;
                double value = 3131;
                field1.setFieldValue(Index, value);

                double xx = ii*deltaX;
                double yy = jj*deltaY;
                double zz = kk*deltaZ;
                int xIndex = Dimensions*Index + 0;
                int yIndex = Dimensions*Index + 1;
                int zIndex = Dimensions*Index + 2;
                std::cout << xx << " " << yy << " " << zz << std::endl;
                field1.getPoints()->setCoordinates(xIndex, xx);
                field1.getPoints()->setCoordinates(yIndex, yy);
                field1.getPoints()->setCoordinates(zIndex, zz);
            }
        }
    }

}