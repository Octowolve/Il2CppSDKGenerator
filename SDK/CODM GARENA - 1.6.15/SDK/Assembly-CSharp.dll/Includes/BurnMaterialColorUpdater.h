#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BurnMaterialColorUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BurnMaterialColorUpdater"));
	}

	template <typename T = Il2CppString*> T& ParamName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& InitValue() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& BurnValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& curColor() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& speeds() {
		return *(T*)((uintptr_t)this + 0x54);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetColorValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetColorValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init(Il2CppArray<uintptr_t>* materials) {
		return ((T (*)(BurnMaterialColorUpdater*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x530D2A0))(this, materials);
	}
	template <typename T = void> T PlayBurnAnim(bool isBurn, float time) {
		return ((T (*)(BurnMaterialColorUpdater*, bool, float))(Il2CppBase() + 0x530D4E8))(this, isBurn, time);
	}
	template <typename T = void> T UpdateEffect(float delta) {
		return ((T (*)(BurnMaterialColorUpdater*, float))(Il2CppBase() + 0x530D90C))(this, delta);
	}
	template <typename T = float> T GetColorValue(uintptr_t color, int32_t index) {
		return ((T (*)(BurnMaterialColorUpdater*, uintptr_t, int32_t))(Il2CppBase() + 0x530D7F8))(this, color, index);
	}
	template <typename T = void> T SetColorValue(uintptr_t color, int32_t index, float value) {
		return ((T (*)(BurnMaterialColorUpdater*, uintptr_t, int32_t, float))(Il2CppBase() + 0x530DB44))(this, color, index, value);
	}
	template <typename T = void> T xLuaBaseProxy_Init(Il2CppArray<uintptr_t>* P0) {
		return ((T (*)(BurnMaterialColorUpdater*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x530DC4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_PlayBurnAnim(bool P0, float P1) {
		return ((T (*)(BurnMaterialColorUpdater*, bool, float))(Il2CppBase() + 0x530DC50))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateEffect(float P0) {
		return ((T (*)(BurnMaterialColorUpdater*, float))(Il2CppBase() + 0x530DC54))(this, P0);
	}

};

}
