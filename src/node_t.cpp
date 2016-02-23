#include "node_t.hpp"

node_t::node_t(void):
next_(NULL), 
data_(0)
{}

node_t::node_t(TDATO dato):
next_(NULL), 
data_(dato)
{}

node_t::~node_t(void)
{}

node_t* node_t::get_next(void)
{
    return next_;
}

TDATO node_t::get_dato(void)
{
    return data_;
}

void node_t::set_next(node_t* next)
{
    next_= next;
}

void node_t::set_dato(TDATO dato)
{
    data_= dato;
}

ostream& node_t::write(ostream& os)
{
    os << data_ << " ";
}