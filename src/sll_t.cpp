#include "sll_t.hpp"


sll_t::sll_t(void):
beginning_(NULL), 
end_(NULL)
{}

sll_t::~sll_t(void)
{
    while (beginning_ != NULL) 
    {
       	node_t* aux = beginning_;
        beginning_ = beginning_->get_next();
        delete aux;
    }
}

void sll_t::release_list(void)
{
  while (beginning_ != NULL) 
    {
       	node_t* aux = beginning_;
        beginning_ = beginning_->get_next();
        delete aux;
    }  
}

bool sll_t::empty(void) const
{
   return (beginning_ == NULL); 
}


void sll_t::insert_beginning(node_t* aux)
{
    if(empty())
	{
        beginning_ = aux;
        end_ = aux;
	}
	else 
	{ 
        aux->set_next(beginning_);
	    beginning_=aux;
	}
}

node_t* sll_t::extract_beginning(void)
{
    if(beginning_==end_)
	{
		node_t* aux=beginning_;
		beginning_=NULL;
		end_=NULL;
		return aux;
	}
	else
	{
		node_t* aux = beginning_;
		beginning_=beginning_->get_next();
		return aux;
	}
}


void sll_t::insert_end(node_t* aux)                                                                     
{
    if(empty()){
	    end_= aux;
	    beginning_= aux;
	}
	
	else{
	  end_->set_next(aux);
	  end_ = aux;
	}   
}

node_t* sll_t::extract_end(void)
{
    if(beginning_== end_){
	   node_t* aux= beginning_;
	    beginning_= NULL;
	    end_= NULL;

	    return aux;
	}
	else{
	   node_t* aux= beginning_;
	   
	   while(aux->get_next()!= end_){
	       
	    	aux= aux->get_next();
	   }
	   
	    end_= aux;

	    aux= aux->get_next();
	    end_->set_next(NULL);
	    return aux;
	}
}

ostream& sll_t::write(ostream& os) const {
		
    node_t* aux = beginning_;

    while (aux != NULL) {
        aux->write(os);
        aux = aux->get_next();
    }

}