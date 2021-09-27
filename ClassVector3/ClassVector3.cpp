// ClassVector3.cpp 
#include <iostream>
#include "Vector3.h"
int main()
{
	Vector3<float> a = Vector3 <float>(1, 1, 1);
	Vector3<float> b = Vector3 <float>(2, 2, 2);




	std::cout << "Vector a: " << "X:" << a.x << " " << "Y:" << a.y << " " << "Z:" << a.z << "\n";
	std::cout << "Vector b: " << "X:" << b.x << " " << "Y:" << b.y << " " << "Z:" << b.z << "\n";

	std::cout << "Vector c is the sum of a and b... " << "\n";
	Vector3<float> c = a + b;
	std::cout << "vector c: " << "X:" << c.x << " " << "Y:" << c.y << " " << "Z:" << c.z << "\n \n";

	std::cout << "Magnitude of vector a is: " << a.Magnitude() << "\n";
	std::cout << "Magnitude of vector b is: " << b.Magnitude() << "\n";
	b.Normalize();
	std::cout << "Normal of vector b is: " << "X:" << b.x << " " << "Y:" << b.y << " " << "Z:" << b.z << "\n";
	std::cout << "Magnitude of vector b is: " << b.Magnitude() << "\n";

	std::cout << "\nCheck if vector c is zero...\n";
	if (c.isZero())
		std::cout << "This vector is Zero" << "\n";
	else
		std::cout << "This vector is NOT Zero" << "\n";

	std::cout << "\nSet vector c to zero... "<<"\n";
	c.Zero();
	std::cout << "Vector c: " << "X:" << c.x << " " << "Y:" << c.y << " " << "Z:" << c.z << "\n";

	std::cout << "Check if vector c is zero...\n";
	if(c.isZero())
		std::cout << "This vector is Zero" << "\n";
	else
		std::cout << "This vector is NOT Zero" << "\n";


	Vector3<float> f = Vector3 <float>(1, 1, 1);
	Vector3<float> g = Vector3 <float>(2, 2, 2);
	std::cout << "\nCheck Distance between vector f and g ... \n" ;
	std::cout << "Vector f: " << "X:" << f.x << " " << "Y:" << f.y << " " << "Z:" << f.z << "\n";
	std::cout << "Vector g: " << "X:" << g.x << " " << "Y:" << g.y << " " << "Z:" << g.z << "\n";
	std::cout << "Distance is:" <<f.Distance(g)<< "\n";


	Vector3<float> t = Vector3 <float>(2, 4, 5);
	Vector3<float> p = Vector3 <float>(5, 3, 6);
	std::cout << "\nSum and substraction of vectors...\n";
	std::cout << "Vector t: " << "X:" << t.x << " " << "Y:" << t.y << " " << "Z:" << t.z << "\n";
	std::cout << "Vector p: " << "X:" << p.x << " " << "Y:" << p.y << " " << "Z:" << p.z << "\n";
	Vector3<float> n = t - p;
	std::cout << "Vector n is the substraction of a and b... " << "\n";
	std::cout << "Vector n: " << "X:" << n.x << " " << "Y:" << n.y << " " << "Z:" << n.z << "\n";

	Vector3<float> i = n;
	std::cout << "Vector i is equal to vetor n... \nlets check it! \n";
	
	if (i == n)
		std::cout << "This vecotrs are equal! \n";
	else
		std::cout << "This vectors are not equal! \n";
}