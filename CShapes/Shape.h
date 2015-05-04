#include "stdafx.h"

class IShape
{
public:
	IShape();
	virtual ~ IShape();

	virtual double square() const = 0;
	virtual double perimeter() const = 0;
	virtual std::string ToString() const = 0;

};