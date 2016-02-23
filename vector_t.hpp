#pragma once

#include "addons.hpp"


using namespace std;


class vector_t{
  private:
    TDATO* datos_;
    int     sz_;
  public:
    vector_t(void);
    vector_t(int n);
    vector_t(const vector_t& v);
    ~vector_t(void);
    
    //void resize(int n);
    
    int get_sz(void) const;
    TDATO& get_val(int i);
    TDATO get_val(int i) const;
    
    ostream& write(ostream& os) const;
    //istream& read(istream& is);
    
    TDATO scalprod(const vector_t& v) const;
    
    
    TDATO& operator[](int i);
    TDATO operator[](int i) const;
    
    void release_vector(void);
    
};

TDATO operator*(const vector_t& v, const vector_t& w);

ostream& operator<<(ostream& os, const vector_t& v);
//istream& operator>>(istream& is, vector_t& v);