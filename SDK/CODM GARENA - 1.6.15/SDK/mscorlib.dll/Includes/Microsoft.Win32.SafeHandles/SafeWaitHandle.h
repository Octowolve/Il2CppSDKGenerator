#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Microsoft.Win32.SafeHandles {

class SafeWaitHandle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Microsoft.Win32.SafeHandles", "SafeWaitHandle"));
	}


	template <typename T = bool> T ReleaseHandle() {
		return ((T (*)(SafeWaitHandle*))(Il2CppBase() + 0x3F89BD8))(this);
	}

};

}
