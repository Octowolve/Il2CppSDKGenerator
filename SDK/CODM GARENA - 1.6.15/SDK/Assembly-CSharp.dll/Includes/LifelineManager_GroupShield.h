#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LifelineManagerGroupShield
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LifelineManager_GroupShield"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMasterSrcMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FollowerChangeMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MaterialSetValue_GroupShield() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T get_LifelineType() {
		return ((T (*)(LifelineManagerGroupShield*))(Il2CppBase() + 0x4936908))(this);
	}
	template <typename T = uintptr_t> T get_LifelineEffectID() {
		return ((T (*)(LifelineManagerGroupShield*))(Il2CppBase() + 0x4936910))(this);
	}
	template <typename T = uintptr_t> T get_MasterEffectID() {
		return ((T (*)(LifelineManagerGroupShield*))(Il2CppBase() + 0x493691C))(this);
	}
	template <typename T = uintptr_t> T GetMasterSrcMat() {
		return ((T (*)(LifelineManagerGroupShield*))(Il2CppBase() + 0x4936928))(this);
	}
	template <typename T = void> T FollowerChangeMaterial(uintptr_t pawn) {
		return ((T (*)(LifelineManagerGroupShield*, uintptr_t))(Il2CppBase() + 0x4936A80))(this, pawn);
	}
	template <typename T = void> static T MaterialSetValue_GroupShield(uintptr_t src, uintptr_t dst) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4936D24))(0, src, dst);
	}
	template <typename T = void> T xLuaBaseProxy_FollowerChangeMaterial(uintptr_t P0) {
		return ((T (*)(LifelineManagerGroupShield*, uintptr_t))(Il2CppBase() + 0x4936EE0))(this, P0);
	}

};

}
