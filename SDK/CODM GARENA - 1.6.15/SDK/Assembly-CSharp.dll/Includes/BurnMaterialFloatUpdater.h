#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BurnMaterialFloatUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BurnMaterialFloatUpdater"));
	}

	template <typename T = Il2CppString*> T& ParamName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& InitValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& BurnValue() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBurnAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(Il2CppArray<uintptr_t>* materials) {
		return ((T (*)(BurnMaterialFloatUpdater*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x530DD98))(this, materials);
	}
	template <typename T = void> T PlayBurnAnim(bool isBurn, float time) {
		return ((T (*)(BurnMaterialFloatUpdater*, bool, float))(Il2CppBase() + 0x530DF14))(this, isBurn, time);
	}
	template <typename T = void> T UpdateEffect(float delta) {
		return ((T (*)(BurnMaterialFloatUpdater*, float))(Il2CppBase() + 0x530E0C8))(this, delta);
	}
	template <typename T = void> T xLuaBaseProxy_Init(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(BurnMaterialFloatUpdater*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x530E24C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayBurnAnim(bool P0, float P1) {
		return ((T (*)(BurnMaterialFloatUpdater*, bool, float))(Il2CppBase() + 0x530E250))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEffect(float P0) {
		return ((T (*)(BurnMaterialFloatUpdater*, float))(Il2CppBase() + 0x530E254))(this, P0);
	}

};

}
