#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Puffer {

class PufferConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Puffer", "PufferConfig"));
	}

	template <typename T = uint32_t> T& maxDownloadSpeed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& maxDownTask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& maxDownloadsPerTask() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& resDir() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& pufferServerUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& pufferProductId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& pufferGroupMarkId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& needCheck() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& needFileRestore() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& removeOldWhenUpdate() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = Il2CppString*> T& userId() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& pufferGameId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& pufferUpdateType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& dolphinProductId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& dolphinAppVersion() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& dolphinResVersion() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& isAuditVersion() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
