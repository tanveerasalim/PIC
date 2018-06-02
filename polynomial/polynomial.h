#ifndef __POLYNOMIAL_H__
#define __POLYNOMIAL_H__
#include <cassert>
#include <iostream>
#include <vector>
using std::vector;

class polynomial {
private: 
int length;  
vector<double> v;

public:
  polynomial(double c = 0.0);
  int degree();
  int nonzeroTerms();
  void setCoeff(int deg, double c);
  double getCoeff(int deg);
  double operator()(double x);
  polynomial operator+(polynomial p);
  polynomial& operator+=(polynomial p);
  polynomial operator-();
  polynomial operator-(polynomial p);
  polynomial& operator-=(polynomial p);
  polynomial operator*(polynomial p);
  polynomial& operator*=(polynomial p);
};

int polynomial::degree()
{

	return (int) v.capacity() - 1;

}

void polynomial::setCoeff(int deg, double c)
{

	assert (deg >=0);

	if ( deg >= v.size() - 1)
	{
		int biggest_index = (int) v.capacity()-1;	

		v.resize(deg+1);	
		
		v[deg] = c;
	}
	else // (deg < v.size()-1)
	{

		v[deg] = c;

	}

}

polynomial operator+(double c, polynomial p);
polynomial operator*(double c, polynomial p);
std::ostream& operator<<(std::ostream& s, polynomial p);



#endif