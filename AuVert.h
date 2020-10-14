#include "AuRigVert.h"

class AuVert
{
public:
	float x;
	float y;
	float z;
	float nx;
	float ny;
	float nz;
	float u;
	float v;
	int numRigVerts;
	AuRigVert** rigVerts;
};
