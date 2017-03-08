#pragma once

#ifndef NAVMESHTILELOADER_H
#define NAVMESHTILELOADER_H

#include "DetourNavMesh.h"

class NavMeshTileLoader
{
public:
	dtNavMesh* loadAll(const char* path);
};

#endif // NAVMESHTILELOADER_H