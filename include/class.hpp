#include <iostream>

#ifndef CLASS_HPP
#define CLASS_HPP
enum color{red, green, blue, white, black, yellow}; //tarif enum baraye rang parcheh
enum fabric{denim, silk, cotton, lace}; //tarif enum baraye jens parcheh
enum model{Singer, Janome, Brother, Viking}; //tarif enum baraye model charkh khayati. asami vaghei hastan
enum type{mechanical, electronic, automated}; //tarif enum baraye noeh charkh khayati. asami vaghei hastan

class cloth //tarif class parcheh
{
private:
    float width; //tool
    float length; //arz
    color Color; //rang
    fabric Fabric; //jens
public: //tabeh haye set va get baraye data memeber ha va constructor va operator overloading
    explicit cloth(float, float, color, fabric); //constructor
    void set_width(float);
    void set_length(float);
    void set_color(color);
    void set_fabric(fabric);
    float get_width() const;
    float get_length() const;
    color get_color() const;
    fabric get_fabric() const;
    bool operator>(const cloth &c1) const; //masahat 2 tike parche ra moghayese mikonad
};


class sewingmachine //tarif class charkh khayati
{
private:
    model Model;
    type Type;
public: //tabeh haye set va get baraye data memeber ha va constructor
    explicit sewingmachine(model, type); //constructor
    void set_model(model);
    void set_type(type);
    type get_type() const;
    model get_model() const;
};

#endif

