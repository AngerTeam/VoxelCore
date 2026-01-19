#pragma once

#include "CompanyName/VoxelEngine/VoxelSettings.h"
#include "CompanyName/VoxelEngine/VoxelManager.h"

namespace CompanyName
{
    class Core
    {
        public:
            VoxelEngine::VoxelSettings* settings;
            VoxelEngine::VoxelManager* manager;
    };
}