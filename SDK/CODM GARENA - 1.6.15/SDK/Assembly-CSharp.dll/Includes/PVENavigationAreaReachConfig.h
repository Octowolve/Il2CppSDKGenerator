#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PVENavigationAreaReachConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PVENavigationAreaReachConfig"));
	}

	template <typename T = int32_t> T& AreaMask() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetValueAtIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T SetMask(int32_t index, bool value) {
		return ((T (*)(PVENavigationAreaReachConfig*, int32_t, bool))(Il2CppBase() + 0x406C8FC))(this, index, value);
	}
	template <typename T = bool> T GetValueAtIndex(int32_t index) {
		return ((T (*)(PVENavigationAreaReachConfig*, int32_t))(Il2CppBase() + 0x406C9D4))(this, index);
	}

};

}
