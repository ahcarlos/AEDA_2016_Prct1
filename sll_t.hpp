#include "addons.hpp"
#include "node_t.hpp"

#pragma once

class sll_t {
    
    private:
        node_t* beginning_;
        node_t* end_;

    public:
        sll_t(void);
        ~sll_t(void);

        void insert_beginning(node_t* n);
        node_t* extract_beginning(void);

	    void insert_end(node_t* aux);
	    node_t* extract_end(void);
	   
        bool empty(void) const;
        void release_list(void);
	    ostream&  write(ostream& os) const;
};