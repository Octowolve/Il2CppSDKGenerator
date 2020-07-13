#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SyncDomAreaSoundInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SyncDomAreaSoundInfo"));
	}

	template <typename T = unsigned char> T& Id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsNew() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = float> T& PlayTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& OwnerCamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& AttackerCamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& State() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
