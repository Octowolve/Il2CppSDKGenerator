#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BurnMaterialUpdater
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BurnMaterialUpdater"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_Materials() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& curProgress() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& realSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& curTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& totalTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& isAnimating() {
		return *(T*)((uintptr_t)this + 0x1C);
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
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Init(Il2CppArray<uintptr_t>* materials) {
		return ((T (*)(BurnMaterialUpdater*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x530D440))(this, materials);
	}
	template <typename T = void> T PlayBurnAnim(bool isBurn, float time) {
		return ((T (*)(BurnMaterialUpdater*, bool, float))(Il2CppBase() + 0x530D72C))(this, isBurn, time);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BurnMaterialUpdater*))(Il2CppBase() + 0x530E258))(this);
	}
	template <typename T = void> T UpdateEffect(float deltaTime) {
		return ((T (*)(BurnMaterialUpdater*, float))(Il2CppBase() + 0x530DC58))(this, deltaTime);
	}

};

}
