#ifndef LC_BASE_CHECKER_H
#define LC_BASE_CHECKER_H

#include "netcommon.h"

class LcBaseChecker
{
public:
	virtual int CheckPacketHead(OverLap* pOverLap, const unsigned int& uiHeadSize) = 0;
	virtual int CheckPacketEnd(OverLap* pOverLap) = 0;

};


#endif
