#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponPartACOGOptics
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponPart_ACOGOptics"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_OldCrossHairParams() {
		return *(T*)((uintptr_t)this + 0x1D0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTexCrossHairHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnNotifyTexCrossHairHud(uintptr_t beginStateType) {
		return ((T (*)(WeaponPartACOGOptics*, uintptr_t))(Il2CppBase() + 0x2415EEC))(this, beginStateType);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTexCrossHairHud(uintptr_t P0) {
		return ((T (*)(WeaponPartACOGOptics*, uintptr_t))(Il2CppBase() + 0x24162EC))(this, P0);
	}

};

}
