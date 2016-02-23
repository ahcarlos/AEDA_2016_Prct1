#include "../addons.hpp"
#include "sll_t.hpp"
#pragma once

class queue_t{
    private:
        sll_t list_;
    
    public:
        queue_t(void);
        ~queue_t(void);
        
        void put(TDATO dato);
        TDATO get(void);
        
        bool empty(void);
        void release_queue(void);
        
        ostream& write(ostream& os);
    
};