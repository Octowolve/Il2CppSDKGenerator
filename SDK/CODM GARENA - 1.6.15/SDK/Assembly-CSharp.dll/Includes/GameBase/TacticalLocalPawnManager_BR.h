#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManagerBR
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager_BR"));
	}

	template <typename T = uintptr_t> T& overlapStrategy() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowPlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AdjustPlayerIconUI(uintptr_t View, uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBR*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D3D8C))(this, View, inSprite, inPawn);
	}
	template <typename T = bool> T NeedShowPlayerNum(uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManagerBR*, uintptr_t))(Il2CppBase() + 0x30D3FD8))(this, inPawn);
	}
	template <typename T = void> T xLuaBaseProxy_AdjustPlayerIconUI(uintptr_t P0, uintptr_t P1, uintptr_t P2) {
		return ((T (*)(TacticalLocalPawnManagerBR*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D42D0))(this, P0, P1, P2);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedShowPlayerNum(uintptr_t P0) {
		return ((T (*)(TacticalLocalPawnManagerBR*, uintptr_t))(Il2CppBase() + 0x30D42E8))(this, P0);
	}

};

}
