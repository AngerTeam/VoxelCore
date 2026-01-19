#include <stdio.h>
#include <malloc.h>

#include "UArray.h"

void UArray::Init(size_t elemCount, size_t elemSize)
{
    length = elemCount;
    elementSize = elemSize;

    size = elemCount * elemSize;
    unityArraySize = size + sizeof(MonoArray);

    unknownArray = (MonoArray*)calloc(unityArraySize, 1);
    unityArray = unknownArray;

    unknownArray->length = elemCount;
    data = unknownArray->data;
}

void UArray::Dispose()
{
    elementSize = 0;
    length = 0;
    size = 0;
    unityArraySize = 0;

    delete unknownArray;
    unityArray = NULL;
    data = NULL;
}

UArray::UArray(size_t elemCount, size_t elemSize)
{
    Init(elemCount, elemSize);
}

UArray::~UArray()
{
    Dispose();
}

size_t UArray::Size()
{
    return size;
}

size_t UArray::Length()
{
    return length;
}

void* UArray::GetData()
{
    return data;
}

MonoArray* UArray::GetUnityArray()
{
    return unityArray;
}

void UArray::SetSharpArrayLength(size_t len)
{
    if (len > length)
    {
        len = length;
    }

    unityArray->length = len;
}