#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "class.hpp"
using namespace std;

//cloth functions implementation
cloth::cloth() // default constructor
{

}
cloth::~cloth() // destructor
{

}
cloth::cloth(float w, float l, string c, string f) //constructor
{
    try
    {
        set_width(w);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        set_length(l);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        set_color(c);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        set_fabric(f);
    }
    catch(const invalid_argument& e)
    {
        std::cerr << e.what() << endl;
    }
}
////set functions
void cloth::set_width(float w)
{
    width = w;
}
void cloth::set_length(float l)
{
    length = l;
}
void cloth::set_color(string c)
{
    for (auto item: colors)
    {
        if(c == item)
        {
            Color = c;
            break;
        }
    }
    throw invalid_argument("color unavailable");
}
void cloth::set_fabric(string f)
{
    for (auto item:fabrics)
    {
        if(f == item)
        {
            Fabric = f;
            break;
        }
    }
    throw invalid_argument("fabric unavailable");
}
////get functions
float cloth::get_width() const
{
    return width;
}
float cloth::get_length() const
{
    return length;
}
string cloth::get_color() const
{
    return Color;
}
string cloth::get_fabric() const
{
    return Fabric;
}
////operator overloading
bool cloth::operator>(const cloth &c1) const //masaha
{
    return ((width*length) > (c1.width*c1.length));
}



//sewingmachine functions implementation
sewingmachine::~sewingmachine() // destructor
{

}
sewingmachine::sewingmachine(string m, string t) //constructor
{
    try
    {
        set_model(m);
    }
    catch(const invalid_argument& e)
    {
        std::cerr << e.what() << endl;
    }
    
    try
    {
        set_type(t);
    }
    catch(const invalid_argument& e)
    {
        std::cerr << e.what() << endl;
    }
}
//// set functions
void sewingmachine::set_model(string m)
{
    for (auto item: models)
    {
        if(m == item)
        {
            Model = m;
            break;
        }
    }
    throw invalid_argument("model unavailable");
}
void sewingmachine::set_type(string t)
{
    for (auto item: types)
    {
        if(t == item)
        {
            Type = t;
            break;
        }
    }
    throw invalid_argument("type unavailable");
}
////get functions
string sewingmachine::get_type() const
{
    return Type;
}
string sewingmachine::get_model() const
{
    return Model;
}



// patterned_cloth functions implementation
patterned_cloth::~patterned_cloth() // destructor
{

}
patterned_cloth::patterned_cloth(float w, float l, string c, string f, string p) // constructor
{
    try
    {
        set_width(w);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        set_length(l);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        set_color(c);
    }
    catch(const invalid_argument& e)
    {
        cerr << e.what() << endl;
    }
    
    try
    {
        set_fabric(f);
    }
    catch(const invalid_argument& e)
    {
        std::cerr << e.what() << endl;
    }

    try
    {
        set_pattern(p);
    }
    catch(const invalid_argument& e)
    {
        std::cerr << e.what() << endl;
    }
}
//// set functions
void patterned_cloth::set_pattern(string p)
{
    for (auto item: patterns)
    {
        if(p == item)
        {
            Pattern = p;
            break;
        }
    }
    throw invalid_argument("pattern unavailable");
}
////get functions
string patterned_cloth::get_pattern() const
{
    return Pattern;
}