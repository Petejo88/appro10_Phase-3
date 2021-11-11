#include <iostream>
#include "class.hpp"
using namespace std;

//cloth member functions
cloth::cloth(float w, float l, color c, fabric f) //constructor
{
    set_width(w);
    set_length(l);
    set_color(c);
    set_fabric(f);
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
void cloth::set_color(color c)
{
    bool iscolor = false;
    int i;
    for ( i = red; i <= yellow; i++)
    {
        if(c == i)
        {
            Color = c;
            iscolor = true;
        }
    }
    if(!iscolor)
    {
        cout << "color unavailable" << endl;
    }
}
void cloth::set_fabric(fabric f)
{
    bool isfabric = false;
    int i;
    for (i = denim; i <= lace; i++)
    {
        if(f == i)
        {
            Fabric = f;
            isfabric = true;
        }
    }
    if(!isfabric)
    {
        cout << "fabric unavailable" << endl;
    }
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
color cloth::get_color() const
{
    return Color;
}
fabric cloth::get_fabric() const
{
    return Fabric;
}
////operator overloading
bool cloth::operator>(const cloth &c1) const
{
    return (get_width()*get_length()) > (c1.get_width()*c1.get_length());
}



//sewingmachine member functions
sewingmachine::sewingmachine(model m, type t) //constructor
{
    set_model(m);
    set_type(t);
}
//// set functions
void sewingmachine::set_model(model m)
{
    bool ismodel = false;
    int i;
    for (i = Singer; i <= Viking; i++)
    {
        if(m == i)
        {
            Model = m;
            ismodel = true;
        }
    }
    if(!ismodel)
    {
        cout << "model unavailable" << endl;
    }
}
void sewingmachine::set_type(type t)
{
    bool istype = false;
    int i;
    for (i = mechanical; i <= automated; i++)
    {
        if(t == i)
        {
            Type = t;
            istype = true;
        }
    }
    if(!istype)
    {
        cout << "type unavailable" << endl;
    }
}
////get functions
type sewingmachine::get_type() const
{
    return Type;
}
model sewingmachine::get_model() const
{
    return Model;
}