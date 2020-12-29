#include <iostream>
#include "points.hpp"
#include "dataClass.hpp"
#include "makeStructuredMesh.hpp"
#include "fieldManager.hpp"

int main()
{

    data::dataClass gdata;
    //read input
    gdata.setCX(2);
    gdata.setCY(3);
    gdata.setCZ(4);
    gdata.updateNodeNumber();
    gdata.setDeltaX(0.1);
    gdata.setDeltaY(0.2);
    gdata.setDeltaZ(0.3);
    std::cout << "cell : "<< gdata.getCX() << " " << gdata.getCY() << " " << gdata.getCZ() << std::endl;
    std::cout << "node ; "<< gdata.getNX() << " " << gdata.getNY() << " " << gdata.getNZ() << std::endl;
    std::cout << "spacing : " << gdata.getDeltaX() << " " << gdata.getDeltaY() << " " << gdata.getDeltaZ() << std::endl;

    //input files////////////////////////////////////////////////////////
    int numberPoints = gdata.getNX()*gdata.getNY()*gdata.getNZ();
    int Dimensions   =  3;
    std::string fieldNamePhi =  "Phi";
    double initialValues = 3.3;
    ////////////////////////////////////////////////////////////////////
    //point
    Field::points simuPoints(numberPoints,Dimensions);
    
    //edge
    //simEdges(numberEdges)
    //face
    //volume
    Field::field field1(fieldNamePhi,numberPoints,Dimensions,initialValues,&simuPoints);

    //makepoint
    //makeEdge
    //makeFace
    //makeVokume
    Field::makeStructuredMesh Mesh;
    Mesh.makeStructuredPoints(gdata, field1); 

    //check field
    std::cout << field1.getFileName() << std::endl;
    for(int ii = 0 ; ii < numberPoints; ii++)
    {
        int sIndex = Dimensions*ii;
        int eIndex = Dimensions*(ii+1);
        for(int jj = sIndex ; jj < eIndex ;jj++)
        {
            std::cout << field1.getPoints()->getCoordinates()[jj] << " ";
        }
        std::cout << field1.getFieldValue()[ii] << std::endl;
    }

    return 0;
}