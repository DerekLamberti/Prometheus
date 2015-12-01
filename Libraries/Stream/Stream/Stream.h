// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the STREAM_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// STREAM_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef STREAM_EXPORTS
#define STREAM_API __declspec(dllexport)
#else
#define STREAM_API __declspec(dllimport)
#endif

namespace Pro
{

	// This class is exported from the Stream.dll
	class STREAM_API CStream {
	public:
		CStream(void);


	};


	extern STREAM_API int nStream;

	STREAM_API int fnStream(void);
} //namespace Pro