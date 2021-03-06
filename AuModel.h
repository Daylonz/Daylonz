#include <matrix3.h>
#include "AuVert.h"
#include "AuFace.h"
#include "AuMaterial.h"

class AuModel
{
public:
	const wchar_t* name;
	short index;
	short fileType;
	int lightObjectFlag;
	Matrix3 nodePos;
	int numVerts;
	int numFaces;
	int numMaterialIDs;
	int numMaterials;
	AuVert** verts;
	AuVert** animverts;
	bool hasSecondUV;
	AuVert** secondUV;
	AuFace** faces;
	int** materialIDCounts;
	AuMaterial** materials;
};