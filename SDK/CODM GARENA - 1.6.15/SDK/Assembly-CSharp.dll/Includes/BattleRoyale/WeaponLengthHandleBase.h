#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class WeaponLengthHandleBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "WeaponLengthHandleBase"));
	}

	template <typename T = float> static T& MaxWeaponLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_weapon() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& m_length() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_BRPawn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(uintptr_t weapon) {
		return ((T (*)(WeaponLengthHandleBase*, uintptr_t))(Il2CppBase() + 0x35B3E40))(this, weapon);
	}
	template <typename T = void> T UnInit() {
		return ((T (*)(WeaponLengthHandleBase*))(Il2CppBase() + 0x35B40D0))(this);
	}
	template <typename T = float> T Get() {
		return ((T (*)(WeaponLengthHandleBase*))(Il2CppBase() + 0x35B41E4))(this);
	}
	template <typename T = void> T UpdateLength() {
		return ((T (*)(WeaponLengthHandleBase*))(Il2CppBase() + 0x35B0B4C))(this);
	}

};

}
