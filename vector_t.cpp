#include "vector_t.hpp"


vector_t::vector_t(void):
datos_(NULL),
sz_(0)
{}

vector_t::vector_t(int n):
datos_(NULL),
sz_(n)
{
    datos_ = new TDATO [sz_];
}

vector_t::vector_t(const vector_t& v):
datos_(NULL),
sz_(v.get_sz())
{
    
    for(int i = 0; i < sz_; i++)
        datos_[i] = v.get_val(i);
}

vector_t::~vector_t(void)
{
    if (datos_ != NULL){
        delete [] datos_;
        datos_ = NULL;
    }
}

void vector_t::release_vector(void)
{
    if (datos_ != NULL){
        delete [] datos_;
        datos_ = NULL;
    }
}

int vector_t::get_sz(void) const
{
    return sz_;
}

TDATO& vector_t::get_val(int i)
{
    return datos_[i];
}
TDATO vector_t::get_val(int i) const
{
    return datos_[i];
}

ostream& vector_t::write(ostream& os) const
{
    os << setw(2)<<"Numero de elementos en el vector:" << sz_ << endl;
    
    for(int i = 0; i < sz_; i++)
        os << setw(2) << fixed << setprecision(4) << datos_[i] << " ";
        
    os << endl;
}

/*
istream& vector_t::read(istream& is)
{
    is >> sz_;
    
    resize(sz_);
    
    for(int i = 0; i < sz_; i++)
        is >> datos_[i];
}
*/



TDATO vector_t::scalprod(const vector_t& v) const
{
    double prod = 0.0;
    
    for(int i = 0; i < sz_; i++)
        prod += datos_[i] * v.get_val(i);
        
    return prod;
}



TDATO& vector_t::operator[](int i)
{
    return get_val(i);
}

TDATO vector_t::operator[](int i) const
{
    return get_val(i);
}



//TDATO operator*(const vector_t& v, const vector_t& w)
//{
    //return v.scalprod(w);
//}

/*
ostream& operator<<(ostream& os, const vector_t& v)
{
    return v.write(os);
}
*/

/*
istream& operator>>(istream& is, vector_t& v)
{
    return v.read(is);
}
*/