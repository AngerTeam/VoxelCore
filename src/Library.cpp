#include <cstring>
#include <UArray.h>

extern "C" MonoArray* LibraryVersion()
{
    const char* libVersion = "Voxel Core, platform: ANDROID, version: 1.8.14";
    size_t length = strlen(libVersion) + 1;

    UArray* array = new UArray(length, 1);
    memcpy(array->GetData(), libVersion, length);

    return array->GetUnityArray();
}

extern "C" void SetLogPath(MonoArray* path, int length)
{
    // Never called in c#??
}

extern "C" void SetLogLevel(int level)
{
    // Skipping for now as the logger seems to be stripped for release
}