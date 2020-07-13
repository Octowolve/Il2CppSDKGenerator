#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProfileInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ProfileInfo"));
	}

	template <typename T = float> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& ProfileTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
