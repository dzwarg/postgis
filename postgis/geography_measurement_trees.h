#include "liblwgeom_internal.h"
#include "lwgeodetic_tree.h"
#include "lwgeom_cache.h"

int geography_dwithin_cache(FunctionCallInfoData* fcinfo, const GSERIALIZED* g1, const GSERIALIZED* g2, const SPHEROID* s, double tolerance, int* dwithin);
int geography_distance_cache(FunctionCallInfoData* fcinfo, const GSERIALIZED* g1, const GSERIALIZED* g2, const SPHEROID* s, double* distance);
int CircTreePIP(const CIRC_NODE* tree, const GSERIALIZED* g, const LWGEOM* lwgeom);
