#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace InGameNewGuide {

class PVENewGuidePickUpCoin
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "InGameNewGuide", "PVENewGuide_PickUpCoin"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInterface() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Exit() {
		return ((T (*)(PVENewGuidePickUpCoin*))(Il2CppBase() + 0x31739E8))(this);
	}
	template <typename T = bool> T Check() {
		return ((T (*)(PVENewGuidePickUpCoin*))(Il2CppBase() + 0x3173B84))(this);
	}
	template <typename T = uintptr_t> T GetInterface(uintptr_t ID) {
		return ((T (*)(PVENewGuidePickUpCoin*, uintptr_t))(Il2CppBase() + 0x3173D00))(this, ID);
	}
	template <typename T = void> T xLuaBaseProxy_Exit() {
		return ((T (*)(PVENewGuidePickUpCoin*))(Il2CppBase() + 0x3173EA0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_Check() {
		return ((T (*)(PVENewGuidePickUpCoin*))(Il2CppBase() + 0x3173EA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetInterface(uintptr_t P0) {
		return ((T (*)(PVENewGuidePickUpCoin*, uintptr_t))(Il2CppBase() + 0x3173EA8))(this, P0);
	}

};

}
