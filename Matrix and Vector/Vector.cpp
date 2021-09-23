#include "Vector.h"

ostream operator<<(ostream out, const TVector& tv)
{
    return ostream();
}

istream operator>>(ostream in, const TVector& tv)
{
    return istream();
}


template<class T>
inline TVector<T>::TVector(size_t size, size_t start)
{
}

template<class T>
inline TVector<T>::TVector(TVector& tv)
{
}

template<class T>
inline TVector<T>::~TVector()
{
}

template<class T>
inline size_t TVector<T>::GetSize() const
{
	return size_t();
}

template<class T>
inline size_t TVector<T>::GetStart() const
{
	return size_t();
}

template<class T>
inline T& TVector<T>::GetElem(size_t n)
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator[](const size_t i)
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator[](const size_t i) const
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline bool TVector<T>::operator==(const TVector& tv) const
{
	return false;
}

template<class T>
inline T& TVector<T>::operator+(const TVector& tv) const
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator-(const TVector& tv) const
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator*(const TVector& tv) const
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator+(const T& tv) const
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator-(const T& tv) const
{
	// TODO: вставьте здесь оператор return
}

template<class T>
inline T& TVector<T>::operator*(const T& tv) const
{
	// TODO: вставьте здесь оператор return
}

