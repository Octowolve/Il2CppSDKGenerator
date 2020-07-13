#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalLocalPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalLocalPawnManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix1_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSelfShowOnMap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustPlayerIconUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedShowPlayerNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalLocalPawnManager*))(Il2CppBase() + 0x30D349C))(this);
	}
	template <typename T = void> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D3734))(this, inPawnSprite, inPawn);
	}
	template <typename T = void> T UpdateSelfShowOnMap(uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D381C))(this, inSprite, inPawn);
	}
	template <typename T = void> T AdjustPlayerIconUI(uintptr_t View, uintptr_t inSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x30D3AC4))(this, View, inSprite, inPawn);
	}
	template <typename T = bool> T NeedShowPlayerNum(uintptr_t inPawn) {
		return ((T (*)(TacticalLocalPawnManager*, uintptr_t))(Il2CppBase() + 0x30D3B80))(this, inPawn);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalLocalPawnManager*))(Il2CppBase() + 0x30D3C28))(this);
	}

};

}
