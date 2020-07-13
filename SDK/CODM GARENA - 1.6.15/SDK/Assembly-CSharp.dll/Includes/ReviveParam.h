#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReviveParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReviveParam"));
	}

	template <typename T = Il2CppVector3> T& Postion() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsShow() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
