/***************************************************************/
/*  FEM++ : A C++ finite element method code for teaching      */
/*     Computational Dynamics Laboratory                       */
/*     School of Aerospace Engineering, Tsinghua University    */
/*                                                             */
/*     http://www.comdyn.cn/                                   */
/***************************************************************/

#pragma once

using namespace std;

#include <stddef.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include "Node.h"

class Domain;

template <class type> void clear( type* a, int N );	// Clear an array

//	Material base class which only define one data member
//	All type of material classes should be derived from this base class
class Material
{
public:

	unsigned int num;	// Set number
	
	double E;  // Young's modulus

public:

//	Read material data from stream Input
	virtual bool Read(ifstream& Input, int mset) = 0;

//	Write material data to Stream OutputFile
//	virtual void Output(ofstream* OutputFile);
};

//	Element base class
//	All type of element classes should be derived from this base class
class Element
{
protected:

//	Number of nodes per element
	int NEN;

//	Nodes of the element
	Node** nodes;

//	Material of the element
	Material* ElementMaterial;

public:

//	Constructor
	Element() : NEN(0), nodes(NULL), ElementMaterial(NULL) {};

//	Read element data from stream Input
	virtual bool Read(ifstream& Input, int Ele, Material* MaterialSets, Node* NodeList) = 0;

//  Calculate the column height, used with the skyline storage scheme
	void CalculateColumnHeight(unsigned int* ColumnHeight); 

//	Assemble the element stiffness matrix to the global stiffness matrix
	void assembly(double* Matrix, double* StiffnessMatrix, unsigned int* DiagonalAddress);

//	Calculate element stiffness matrix (Upper triangular matrix, stored as an array column by colum)
	virtual void ElementStiffness(double* stiffness) = 0;  

//	Return nodes of the element
	inline Node** GetNodes() { return nodes; }

//	Return material of the element
	inline Material* GetElementMaterial() { return ElementMaterial; }

//	Return the size of the element stiffness matrix (stored as an array column by column)
	virtual unsigned int SizeOfStiffnessMatrix() = 0;     

	friend Domain;	// Allow class Domain to access its protected member
};