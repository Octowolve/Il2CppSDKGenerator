#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VERSIONINFO
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VERSIONINFO"));
	}

	template <typename T = unsigned char> T& isAppUpdating() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& isNeedUpdating() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& isForcedUpdating() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = uintptr_t> T& newAppVersion() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint64_t> T& needDownloadSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& isAuditVersion() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = unsigned char> T& isGrayVersion() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = unsigned char> T& isNormalVersion() {
		return *(T*)((uintptr_t)this + 0x1A);
	}


};

}
