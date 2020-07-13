#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NPCDanDan
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NPC_DanDan"));
	}

	template <typename T = int32_t> T& HitEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& ExplodeEffectAssetId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& FireColliderShape() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Copy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(NPCDanDan*))(Il2CppBase() + 0x3EE0D44))(this);
	}
	template <typename T = void> T Copy(uintptr_t data) {
		return ((T (*)(NPCDanDan*, uintptr_t))(Il2CppBase() + 0x3EE0DE8))(this, data);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(NPCDanDan*))(Il2CppBase() + 0x3EE0F68))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Copy(uintptr_t P0) {
		return ((T (*)(NPCDanDan*, uintptr_t))(Il2CppBase() + 0x3EE0F6C))(this, P0);
	}

};

}
