#include "pid.hpp"
#include <utilites>


//-----------------------------------------------------------------
// Default constructor
PID::PID() {

}

//-----------------------------------------------------------------
// Constructor
//Foo::Foo(int n) : n(n) {

//}

//-----------------------------------------------------------------
// Destructor
PID::~PID()=default;

//-----------------------------------------------------------------
// Copy constructor
PID::PID(const PID& other) {
    *this = other;
}

//-----------------------------------------------------------------
// Move constructor
PID::PID(PID&& other) {
    *this = std::move(other);
}

//-----------------------------------------------------------------
// Copy assignement operator
PID& PID::operator=(const PID& other) {
    this->value = other.value;
    return *this;
}

//-----------------------------------------------------------------
// Move assignement operator
PID& PID::operator=(PID&& other) {
    this->value = std::move(other.value);
    return *this;
}

//-----------------------------------------------------------------
// Some other operator
//int PID::operator()() const {
//	return this->value;
//}

//-----------------------------------------------------------------
// Setter
void PID::set_value(int value) {
    this->value = value;
}

//-----------------------------------------------------------------
// Getter
int PID::get_value() const {
    return this->value;
}

//-----------------------------------------------------------------
// '<<' overload for std::cout
std::ostream& operator<<(std::ostream& os, const PID& a_pid) {
    return os << a_pid.value;
}

//-----------------------------------------------------------------
// Static variable
//int PID::value = 5;

//-----------------------------------------------------------------
// Static function
void PID::print_value() {
    std::cout << "PID::value = " << PID::value << '\n';
}

