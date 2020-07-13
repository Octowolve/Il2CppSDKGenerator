#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderStateMaterialKey
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderStateMaterialKey"));
	}

	template <typename T = uintptr_t> T& Color() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& NearWidth() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FarWidth() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FarDistance() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RimIntensity() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RimRange() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Inequality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Equality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Equals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(RenderStateMaterialKey*, uintptr_t))(Il2CppBase() + 0x412ECC8))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(RenderStateMaterialKey*))(Il2CppBase() + 0x412EE14))(this);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t key1, uintptr_t key2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x412EE1C))(0, key1, key2);
	}
	template <typename T = bool> static T op_Equality(uintptr_t key1, uintptr_t key2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x412F028))(0, key1, key2);
	}
	template <typename T = bool> T Equals_1(uintptr_t other) {
		return ((T (*)(RenderStateMaterialKey*, uintptr_t))(Il2CppBase() + 0x412F234))(this, other);
	}
	template <typename T = bool> T xLuaBaseProxy_Equals(uintptr_t P0) {
		return ((T (*)(RenderStateMaterialKey*, uintptr_t))(Il2CppBase() + 0x412F34C))(this, P0);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetHashCode() {
		return ((T (*)(RenderStateMaterialKey*))(Il2CppBase() + 0x412F41C))(this);
	}

};

}
