#pragma once

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string _name;
	int _age;

public:
	Animal(std::string name, int age) : _name(name), _age(age) {}

	virtual std::string getAnimal() const // Виртуальная неизменяемая функция (за счет const)
	{ 
		return _name + " " + std::to_string(_age);
	}
};

class Cat : public Animal // Наследование + Инкапсуляция + Полиморфизм
{
private:
	std::string _type;

public:
	Cat(std::string name, int age, std::string type) : Animal(name, age) { _type = type; }
	std::string getAnimal() const override
	{
		return _name + " " + std::to_string(_age) + " " +  _type;
	}
};

class Dog : protected Animal
{
private:
	std::string _type;

public:
	Dog(std::string name, int age, std::string type) : Animal(name, age) { _type = type; }
	std::string getAnimal() const override
	{
		return _name + " " + std::to_string(_age) + " " + _type;
	}
};