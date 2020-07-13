#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NodeInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NodeInfo"));
	}

	template <typename T = int32_t> T& NodeId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& Url() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& IsLimited() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsExperience() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
