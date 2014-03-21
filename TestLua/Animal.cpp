#include "stdafx.h"
#include "Animal.h"

Animal::Animal( const char* name ):age(0)
{
	this->name = name;
}

Animal::~Animal(void)
{
	printf( "Animal destructor." );
}

void Animal::setAge( int age )
{
	this->age = age;
}

int Animal::getAge()
{
	return this->age;
}

void Animal::sound()
{
	printf("--Animal-- name: %s, age:%d\n", this->name, this->age ); 
}

