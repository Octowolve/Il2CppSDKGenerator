#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DownloadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DownloadInfo"));
	}

	template <typename T = uint64_t> T& needDownloadSize() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint64_t> T& downloadSize() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& fileSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
