#ifndef FIELDMANAGER_H
#define FIELDMANAGER_H

#include <vector>
#include "field.hpp"
#include "dataClass.hpp" 
#include <list>
#include <string>
#include <iostream>
#include <map>
#include <memory>

namespace Field{
class fieldManager
{
    // private member variables
    std::list< std::shared_ptr<class field> > fieldList_;
    std::shared_ptr<std::map<std::string, int > > fieldMap_;

    // disallow copy construct
    fieldManager(const fieldManager&);
    
    // disallow default bitwise assignment
    void operator=(const fieldManager&);

    public:
    //Constructors
        //constructors
        fieldManager();
        //distructor
        virtual ~fieldManager();

    //menber functions
    std::list< std::shared_ptr<class field> > getFieldList(){
        return fieldList_;
    }
    std::shared_ptr<std::map<std::string, int > > getFieldMap_(){
        return fieldMap_;
    }
    

    private: 
    // member functions
    

};

}// namespace Field
#endif