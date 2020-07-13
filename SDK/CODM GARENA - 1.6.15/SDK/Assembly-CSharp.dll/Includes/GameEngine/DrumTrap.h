#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DrumTrap
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DrumTrap"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& damageVolume() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& LookAtPoint_Second() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTrapType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetTrapType() {
		return ((T (*)(DrumTrap*))(Il2CppBase() + 0x51E8F74))(this);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter) {
		return ((T (*)(DrumTrap*, uintptr_t, bool))(Il2CppBase() + 0x51E9014))(this, p, enter);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetTrapType() {
		return ((T (*)(DrumTrap*))(Il2CppBase() + 0x51E9290))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnLocalPlayerEnterExit(uintptr_t P0, bool P1) {
		return ((T (*)(DrumTrap*, uintptr_t, bool))(Il2CppBase() + 0x51E9298))(this, P0, P1);
	}

};

}
