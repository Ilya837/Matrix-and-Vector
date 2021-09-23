#pragma once
#include <iostream>

typedef unsigned int uint;

using namespace std;

template <class T> class TVector {
private:
	size_t Size;
	T* pVector;
	size_t StartIndex;
public:
	TVector(size_t size = 10,size_t start = 0);
	TVector(TVector& tv);

	~TVector();

	size_t GetSize() const;
	size_t GetStart() const;
	T& GetElem(size_t n);

	T& operator[] (const size_t i);
	T& operator[] (const size_t i) const;

	bool operator ==(const TVector& tv) const;

	T& operator +(const TVector& tv) const;
	T& operator -(const TVector& tv) const;
	T& operator *(const TVector& tv) const;

	T& operator +(const T& tv) const;
	T& operator -(const T& tv) const;
	T& operator *(const T& tv) const;

	friend ostream operator << (ostream out, const TVector& tv);
	friend istream operator >> (ostream in, const TVector& tv);

};

