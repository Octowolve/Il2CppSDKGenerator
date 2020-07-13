#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuideManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCommonInteractiveBtnNewGuide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVENewGuideManager*))(Il2CppBase() + 0x31764BC))(this);
	}
	template <typename T = void> T OnCommonInteractiveBtnNewGuide(uintptr_t Msg) {
		return ((T (*)(PVENewGuideManager*, uintptr_t))(Il2CppBase() + 0x3176914))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVENewGuideManager*))(Il2CppBase() + 0x3176BF8))(this);
	}

};

}
