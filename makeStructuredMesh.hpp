#ifndef MAKESTRUCTUREDMESH_H
#define MAKESTRUCTUREDMESH_H

#include <vector>
#include "field.hpp"
#include "dataClass.hpp" 

namespace Field{
class makeStructuredMesh
{
    // private member variables

    // disallow copy construct
    makeStructuredMesh(const makeStructuredMesh&);
    
    // disallow default bitwise assignment
    void operator=(const makeStructuredMesh&);

    public:
    //Constructors
        //constructors
        makeStructuredMesh();
        //distructor
        virtual ~makeStructuredMesh();

    //menber functions
    void makeStructuredPoints(data::dataClass& gdata, Field::field& field1);
    private: 
    // member functions
    

};

}// namespace Field
#endif