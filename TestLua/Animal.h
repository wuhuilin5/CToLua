#pragma once
#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class Animal
{
public:
	Animal( const char *name );
	void setAge( int age );
	int getAge();
	void sound();
	~Animal(void);

private:
	const char *name;
	int age;
};

#endif

