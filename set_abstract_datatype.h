//
//  Name: Yuya Oguchi
//  COEN 70
//  Chapter 6, Project 2 a
//  2/10/2016
//  set class for abstract datatype assuming it can be comparable datatype

template<typename T>
#include <cstdlib>  // Provides size_t
class set{
private:
    T *data;
public:
    typedef bool value_type;
    typedef int size_type;
    static const size_type CAPACITY = 100;
    // CONSTRUCTOR
    set( );
    // MODIFICATION MEMBER FUNCTIONS
    void insert(const T& entry);
    void takeout(const T& target);
    // CONSTANT MEMBER FUNCTIONS
    bool contains(const T& target);
    void dump();
};
