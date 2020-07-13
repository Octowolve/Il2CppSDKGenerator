#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class MPNewGuideManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "MPNewGuideManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonFireBtnNewGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(MPNewGuideManager*))(Il2CppBase() + 0x31703E0))(this);
	}
	template <typename T = void> T OnCommonFireBtnNewGuide(uintptr_t Msg) {
		return ((T (*)(MPNewGuideManager*, uintptr_t))(Il2CppBase() + 0x3170838))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(MPNewGuideManager*))(Il2CppBase() + 0x3170948))(this);
	}

};

}
