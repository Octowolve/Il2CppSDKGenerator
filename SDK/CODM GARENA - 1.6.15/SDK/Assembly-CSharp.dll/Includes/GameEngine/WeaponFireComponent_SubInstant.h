#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponFireComponentSubInstant
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponFireComponent_SubInstant"));
	}

	template <typename T = float> T& m_RepeatShotFireInterval() {
		return *(T*)((uintptr_t)this + 0x344);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyProperties() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T CopyProperties(uintptr_t inFrom, bool includeParent) {
		return ((T (*)(WeaponFireComponentSubInstant*, uintptr_t, bool))(Il2CppBase() + 0x23FE2A4))(this, inFrom, includeParent);
	}
	template <typename T = uintptr_t> T get_DataType() {
		return ((T (*)(WeaponFireComponentSubInstant*))(Il2CppBase() + 0x23FE3C4))(this);
	}
	template <typename T = float> T get_RepeatShotFireInterval() {
		return ((T (*)(WeaponFireComponentSubInstant*))(Il2CppBase() + 0x23FE480))(this);
	}
	template <typename T = void> T xLuaBaseProxy_CopyProperties(uintptr_t P0, bool P1) {
		return ((T (*)(WeaponFireComponentSubInstant*, uintptr_t, bool))(Il2CppBase() + 0x23FE488))(this, P0, P1);
	}

};

}
