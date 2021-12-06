#include <iostream>

#ifndef CLASS_HPP
#define CLASS_HPP
enum color{red, green, blue, white, black, yellow}; //tarif enum baraye rang parcheh
enum fabric{denim, silk, cotton, lace}; //tarif enum baraye jens parcheh
enum model{Singer, Janome, Brother, Viking}; //tarif enum baraye model charkh khayati. asami vaghei hastan
enum type{mechanical, electronic, automated}; //tarif enum baraye noeh charkh khayati. asami vaghei hastan
enum pattern{basketweave, brocade, checkered, chervron, damask}; //tarif enum baraye tarh parched. asami vaghei hastan

class cloth //tarif class parcheh
{
private:
    float width; //tool
    float length; //arz
    color Color; //rang
    fabric Fabric; //jens
public: //tabeh haye set va get baraye data memeber ha va constructor va operator overloading
    cloth();
    cloth(float, float, color, fabric); //constructor
    ~cloth();
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
    sewingmachine(model, type); //constructor
    ~sewingmachine();
    void set_model(model);
    void set_type(type);
    type get_type() const;
    model get_model() const;
};


class patterned_cloth : public cloth //tarif class pharched tarhdar, ers geresfteh shode az calss parcheh
{
private:
    pattern Pattern; //tarh parcheh
public: 
    patterned_cloth(float, float, color, fabric, pattern); 
    ~patterned_cloth();
    void set_pattern(pattern);
    pattern get_pattern() const;
};


#endif
