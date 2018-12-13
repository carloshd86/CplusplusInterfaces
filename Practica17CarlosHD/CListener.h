#pragma once

#include "IListener.h"

class CListener : public IListener
{
public:
	void Tell(const char * info) const;
};

