#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideBuyDrink
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_BuyDrink"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = bool> T get_NotifyAndSelfCheck() {
		return ((T (*)(PVENewGuideBuyDrink*))(Il2CppBase() + 0x3172BB0))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideBuyDrink*))(Il2CppBase() + 0x3172BB8))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(PVENewGuideBuyDrink*, uintptr_t))(Il2CppBase() + 0x3172D34))(this, ID);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideBuyDrink*))(Il2CppBase() + 0x3172ED4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(PVENewGuideBuyDrink*, uintptr_t))(Il2CppBase() + 0x3172ED8))(this, P0);
	}

};

}
