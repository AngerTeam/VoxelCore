#include "CompanyName/Core.h"

extern "C" CompanyName::Core* CreateCore()
{
    return new CompanyName::Core();
}

extern "C" CompanyName::VoxelEngine::VoxelSettings* GetVoxelSettings(CompanyName::Core* core)
{
    if (core->settings == nullptr)
    {
        core->settings = new CompanyName::VoxelEngine::VoxelSettings();
    }

    return core->settings;
}

extern "C" CompanyName::VoxelEngine::VoxelManager* GetVoxelManager(CompanyName::Core* core)
{
    if (core->manager == nullptr)
    {
        core->manager = new CompanyName::VoxelEngine::VoxelManager(core->settings);
    }

    return core->manager;
}

extern "C" void ShowRendererStatus(CompanyName::Core* core)
{
    // STUB
}

extern "C" void ResetRenderer(CompanyName::Core* core)
{
    // STUB
}
