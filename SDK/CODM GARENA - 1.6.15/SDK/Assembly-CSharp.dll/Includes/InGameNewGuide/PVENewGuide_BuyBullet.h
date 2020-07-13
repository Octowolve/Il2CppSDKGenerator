#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuideBuyBullet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_BuyBullet"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuideBuyBullet*))(Il2CppBase() + 0x3171A80))(this);
	}
	template <typename T = void> T ShowEffect() {
		return ((T (*)(PVENewGuideBuyBullet*))(Il2CppBase() + 0x3171D08))(this);
	}
	template <typename T = void> T CloseEffect() {
		return ((T (*)(PVENewGuideBuyBullet*))(Il2CppBase() + 0x3171FC0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuideBuyBullet*))(Il2CppBase() + 0x31721B4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ShowEffect() {
		return ((T (*)(PVENewGuideBuyBullet*))(Il2CppBase() + 0x31721B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CloseEffect() {
		return ((T (*)(PVENewGuideBuyBullet*))(Il2CppBase() + 0x31721BC))(this);
	}

};

}
