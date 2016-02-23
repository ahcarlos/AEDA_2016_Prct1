#include "../addons.hpp"
#include "sll_t.hpp"
#pragma once
class stack_t{
    private:
        sll_t list_;
        
    public:
        stack_t(void);
        ~stack_t(void);
        
        void push(TDATO dato);
        TDATO pop(void);
        
        bool empty(void);
        void release_stack(void);
        
        ostream& write(ostream& os);
    
};