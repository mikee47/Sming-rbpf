#pragma once

class Object
{
public:
	Object(int value) : value(value)
	{
	}

	int increment();

	int getValue() const
	{
		return value;
	}

private:
	int value;
};
