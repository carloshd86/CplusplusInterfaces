#include "stdafx.h"
#include "CListener.h"

void CListener::Tell(const char * info) const
{
	printf("\nListened | %s", info);
}