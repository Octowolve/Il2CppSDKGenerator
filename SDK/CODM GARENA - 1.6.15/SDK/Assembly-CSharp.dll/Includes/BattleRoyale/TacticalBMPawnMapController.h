#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class TacticalBMPawnMapController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "TacticalBMPawnMapController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBMPawnMapController*))(Il2CppBase() + 0x35AEC28))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(TacticalBMPawnMapController*))(Il2CppBase() + 0x35AED80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBMPawnMapController*))(Il2CppBase() + 0x35AEE20))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(TacticalBMPawnMapController*))(Il2CppBase() + 0x35AEE24))(this);
	}

};

}
