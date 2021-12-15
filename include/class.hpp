#include <iostream>

#ifndef CLASS_HPP
#define CLASS_HPP
std::vector <std::string> colors = {"red", "green", "blue", "white", "black", "yellow"}; //tarif vector baraye rang parcheh
std::vector <std::string> fabrics = {"denim", "silk", "cotton", "lace"}; //tarif vector baraye jens parcheh
std::vector <std::string> models = {"Singer", "Janome", "Brother", "Viking"}; //tarif vector baraye model charkh khayati. asami vaghei hastan
std::vector <std::string> types = {"mechanical", "electronic", "automated"}; //tarif vector baraye noeh charkh khayati. asami vaghei hastan
std::vector <std::string> patterns = {"basketweave", "brocade", "checkered", "chevron", "damask"}; //tarif vectorbaraye tarh parched. asami vaghei hastan
class cloth //tarif class parcheh
{
private:
    float width; //tool
    float length; //arz
    std::string Color; //rang
    std::string Fabric; //jens
public: //tabeh haye set va get baraye data memeber ha va constructor va operator overloading
    cloth();
    cloth(float, float, std::string, std::string); //constructor
    ~cloth();
    void set_width(float);
    void set_length(float);
    void set_color(std::string);
    void set_fabric(std::string);
    float get_width() const;
    float get_length() const;
    std::string get_color() const;
    std::string get_fabric() const;
    bool operator>(const cloth &c1) const; //masahat 2 tike parche ra moghayese mikonad
};


class sewingmachine //tarif class charkh khayati
{
private:
    std::string Model;
    std::string Type;
public: //tabeh haye set va get baraye data memeber ha va constructor
    sewingmachine(std::string, std::string); //constructor
    ~sewingmachine();
    void set_model(std::string);
    void set_type(std::string);
    std::string get_type() const;
    std::string get_model() const;
};


class patterned_cloth : public cloth //tarif class pharched tarhdar, ers geresfteh shode az calss parcheh
{
private:
    std::string Pattern; //tarh parcheh
public: 
    patterned_cloth(float, float, std::string, std::string, std::string); 
    ~patterned_cloth();
    void set_pattern(std::string);
    std::string get_pattern() const;
};


#endif
