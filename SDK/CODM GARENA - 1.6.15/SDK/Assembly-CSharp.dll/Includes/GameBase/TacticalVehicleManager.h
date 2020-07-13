#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalVehicleManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalVehicleManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVehicleSpriteList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalVehicleManager*))(Il2CppBase() + 0x27B84E4))(this);
	}
	template <typename T = void> T UpdateVehicleSpriteList(Il2CppList<uintptr_t>* inVehicleList, Il2CppList<uintptr_t>* inVehicleSpriteList) {
		return ((T (*)(TacticalVehicleManager*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x27B85A8))(this, inVehicleList, inVehicleSpriteList);
	}
	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inVehicleSprite, uintptr_t inVehicle) {
		return ((T (*)(TacticalVehicleManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27B8D08))(this, inVehicleSprite, inVehicle);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalVehicleManager*))(Il2CppBase() + 0x27B8FD0))(this);
	}

};

}
