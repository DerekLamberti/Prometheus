// Stream.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Stream.h"

namespace Pro {

	// This is an example of an exported variable
	STREAM_API int nStream = 0;

	// This is an example of an exported function.
	STREAM_API int fnStream(void)
	{
		return 42;
	}

	// This is the constructor of a class that has been exported.
	// see Stream.h for the class definition
	CStream::CStream()
	{
		return;
	}

} //namespace Pro