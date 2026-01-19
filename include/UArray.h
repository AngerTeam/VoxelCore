#pragma once
#include <stdint.h>

typedef struct MonoObject
{
    void* vTable, *syncBlock;
} MonoObject;

typedef struct MonoArray
{
    MonoObject object;

    void* bounds;

    size_t length;

    double data[0];
} MonoArray;

class UArray
{
    private:
        size_t length,
        elementSize, size, unityArraySize;

        MonoArray* unknownArray;
        MonoArray* unityArray;

        void* data;
    public:
        void Init(size_t elemCount, size_t elemSize);
        void Dispose();

        UArray(size_t elemCount, size_t elemSize);
        ~UArray();

        size_t Size();
        size_t Length();

        void* GetData();

        MonoArray* GetUnityArray();
        void SetSharpArrayLength(size_t len);
};