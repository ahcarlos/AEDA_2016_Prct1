#include "stack_t.hpp"

stack_t::stack_t(void):
list_()
{}

stack_t::~stack_t(void)
{
    release_stack();
}

void stack_t::release_stack(void)
{
  list_.release_list();
}

void stack_t::push(TDATO dato)
{
    list_.insert_beginning(new node_t(dato));
}

TDATO stack_t::pop(void)
{
    node_t* n_aux= (node_t*)(list_.extract_beginning());
    TDATO aux= n_aux->get_dato();
    delete n_aux;
    return aux;
}

bool stack_t::empty(void)
{
    return (list_.empty());
}

ostream& stack_t::write(ostream& os)
{
    list_.write(os);
    return os;
}