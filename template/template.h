#include <iostream>

using namespace std;

template <class Type>
class Number
{
private:
	Type data;

	//Nun-member �ye
	//Overloading
	template <class Type>
	friend ostream& operator<<(ostream&, const Number<Type>&);

	template <class Type>
	friend istream& operator>>(istream&,Number<Type>&);




public:
	Number(Type mainData = 0)//Cons
	{
		data = mainData;
	}

	Type getData()
	{
		return data;
	}


	//Overloading
	Type operator +(const Number&);


};

template <class Type>
Type Number<Type>::operator +(const Number& numberObject)
{
	return data + numberObject.data;

}


//<< overloading
template <class Type>
ostream& operator<<(ostream& osObject, const Number <Type> &numberObject)
{
	osObject << "Number: " << numberObject.data << endl;
	return osObject;
}

template <class Type>
istream& operator >>(istream& isObject,Number <Type> &numberObject)
{
	isObject >> numberObject.data;
	return isObject;
}


















