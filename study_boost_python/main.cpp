
#include <boost/python.hpp>
#include <boost/format.hpp>

class a_t {
public:
    a_t() : b(0) {}

    a_t(int b) : b(b) {}

    int b;

    std::string greet() { return (boost::format("a_t(%1%):hello python.") % b).str(); }
};

BOOST_PYTHON_MODULE (libstudy_boost_python) {
    using namespace boost::python;
    class_<a_t>("a_t")
            .def(init<int>())
            .def_readwrite("b", &a_t::b)
            .def("greet", &a_t::greet);
}
