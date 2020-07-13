#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class NewVersionInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "NewVersionInfo"));
	}

	template <typename T = Il2CppString*> T& versionStr() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& needDownloadSize() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& isForce() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& updateType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& userDefineStr() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& isCurrentNewest() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& isAuditVersion() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& isGrayVersion() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = bool> T& isNormalVersion() {
		return *(T*)((uintptr_t)this + 0x17);
	}


};

}
