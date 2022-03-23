#pragma once

using namespace std;

template <typename T, size_t Sz>
class Array
{
	T polje[Sz];
public:
	Array(T x);
	int size() const { 
		return Sz; 
	}
	T& operator[](int indeks) 
	{ return polje[indeks]; }
	T* begin() 
	{ 
		return &polje[0]; 
	};
	T* end()
	{ 
		return &polje[Sz];
	};
};


template<typename T, size_t Sz>
Array<T, Sz>::Array(T x)
{
	fill(Array::begin(), Array::end(), x);
}