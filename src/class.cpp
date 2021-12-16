#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include "class.hpp"
using namespace std;

std::vector <std::string> colors = {"red", "green", "blue", "white", "black", "yellow"}; //tarif vector baraye rang parcheh
std::vector <std::string> fabrics = {"denim", "silk", "cotton", "lace"}; //tarif vector baraye jens parcheh
std::vector <std::string> models = {"Singer", "Janome", "Brother", "Viking"}; //tarif vector baraye model charkh khayati. asami vaghei hastan
std::vector <std::string> types = {"mechanical", "electronic", "automated"}; //tarif vector baraye noeh charkh khayati. asami vaghei hastan
std::vector <std::string> patterns = {"basketweave", "brocade", "checkered", "chevron", "damask"}; //tarif vectorbaraye tarh parched. asami vaghei hastan

//cloth functions implementation
cloth::cloth() // default constructor
{

}
cloth::~cloth() // destructor
{

}
cloth::cloth(float w, float l, string c, string f) //constructor
{

    set_width(w);
    set_length(l);
    
    try //dar in class va baghiye tamam moteghaer hayi ke ba vector tarif shodan ro ba exception chek mikonim ke dorost bashan
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
            return;
        }
    }
    throw invalid_argument("color unavailable"); //dar in clss va baghiye baraye tamam moteghayer hayi ke ba 
}                                                //vector tarif shodan exception throw mikonim
void cloth::set_fabric(string f)
{
    for (auto item:fabrics)
    {
        if(f == item)
        {
            Fabric = f;
            return;
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
            return;
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
            return;
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

    set_width(w);
    set_length(l);

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
            return;
        }
    }
    throw invalid_argument("pattern unavailable");
}
////get functions
string patterned_cloth::get_pattern() const
{
    return Pattern;
}