#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class DownloadProgressChangedEventArgs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "DownloadProgressChangedEventArgs"));
	}

	template <typename T = int64_t> T& received() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& total() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
