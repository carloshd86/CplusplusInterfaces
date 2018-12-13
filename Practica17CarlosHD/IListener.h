#pragma once

class IListener
{
public:
	virtual void Tell(const char * info) const =0;
};
