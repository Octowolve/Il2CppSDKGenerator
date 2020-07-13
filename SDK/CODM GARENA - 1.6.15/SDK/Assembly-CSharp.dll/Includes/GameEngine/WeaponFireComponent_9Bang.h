#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponent9Bang
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_9Bang"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_ShockDurations() {
		return *(T*)((uintptr_t)this + 0x2E0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_HoldDurations() {
		return *(T*)((uintptr_t)this + 0x2E4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_BangIntervals() {
		return *(T*)((uintptr_t)this + 0x2E8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ShockMaxDuration() {
		return *(T*)((uintptr_t)this + 0x2EC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ShockMinDuration() {
		return *(T*)((uintptr_t)this + 0x2F0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ShockSelfMaxDuration() {
		return *(T*)((uintptr_t)this + 0x2F4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ShockSelfMinDuration() {
		return *(T*)((uintptr_t)this + 0x2F8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_FlashBuffs() {
		return *(T*)((uintptr_t)this + 0x2FC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponent9Bang*, uintptr_t, bool))(Il2CppBase() + 0x2EC3544))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponent9Bang*))(Il2CppBase() + 0x2EC385C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponent9Bang*, uintptr_t, bool))(Il2CppBase() + 0x2EC3918))(this, P0, P1);
	}

};

}
