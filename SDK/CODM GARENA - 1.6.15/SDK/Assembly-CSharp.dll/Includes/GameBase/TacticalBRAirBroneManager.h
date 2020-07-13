#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalBRAirBroneManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalBRAirBroneManager"));
	}

	template <typename T = uintptr_t> T& airBorneSprite() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BaseGame() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirBroneSprite() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAirBroneSpriteName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init() {
		return ((T (*)(TacticalBRAirBroneManager*))(Il2CppBase() + 0x30B78AC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(TacticalBRAirBroneManager*))(Il2CppBase() + 0x30B7A4C))(this);
	}
	template <typename T = void> T UpdateAirBroneSprite() {
		return ((T (*)(TacticalBRAirBroneManager*))(Il2CppBase() + 0x30B7AF0))(this);
	}
	template <typename T = void> T UpdateAirBroneSpriteName(uint32_t index) {
		return ((T (*)(TacticalBRAirBroneManager*, uint32_t))(Il2CppBase() + 0x30B8290))(this, index);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(TacticalBRAirBroneManager*))(Il2CppBase() + 0x30B83E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateView() {
		return ((T (*)(TacticalBRAirBroneManager*))(Il2CppBase() + 0x30B83E8))(this);
	}

};

}
