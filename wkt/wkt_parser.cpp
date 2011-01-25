// boost
//#include <boost/geometry/geometries/point_xy.hpp>
#include <boost/spirit/include/qi.hpp>
#include <boost/fusion/include/std_pair.hpp>
// std
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

using namespace boost;
using namespace boost::spirit;

int main()
{
    try
    {
        std::string input("POINT(1.123 2.123)");
        std::string::iterator beg = input.begin();
        std::pair<double, double> p;
        qi::parse(beg, input.end(), "POINT(" >> qi::double_ >> " " >> qi::double_ >> ')', p); 

    }
    catch (std::exception const& e)
    {
        std::cerr << e.what() << std::endl;
    }
}