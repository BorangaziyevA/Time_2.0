#pragma once
#include<iostream>
using namespace std;
class Time_
{
	int *h;
	int *m;
	int *s;
public:
	Time_(int h = 0, int m = 0, int s=0)
	{
		this->h = new int(h);
		this->m = new int(m);
		this->s = new int(s);

	}
	~Time_()
	{
		clear();
	}
	void set_h(int h)
	{
		*this->h = h;
	}
	void set_m(int m)
	{
		*this->m = m;
	}
	void set_s(int s)
	{
		*this->s = s;
	}

	void clear()
	{
		delete this->h;

		delete this->m;

		delete this->s;
	}
	
	Time_(const Time_ & obj)
	{
		this->h = new int(*obj.h);
		this->m = new int(*obj.m);
		this->s = new int(*obj.s);

	}
};

