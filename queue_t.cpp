#include "queue_t.hpp"


queue_t::queue_t(void):
list_()
{}

queue_t::~queue_t(void)
{
    release_queue();
}

void queue_t::put(TDATO dato)
{
    list_.insert_beginning(new node_t(dato));
}

TDATO queue_t::get(void)
{
    node_t* n_aux= (node_t*)(list_.extract_end());
    TDATO aux= n_aux->get_dato();
    delete n_aux;
    return aux;
}

bool queue_t::empty(void)
{
    return list_.empty();
}

void queue_t::release_queue(void)
{
    list_.release_list();
}

ostream& queue_t::write(ostream& os)
{
    list_.write(os);
    return os;
}