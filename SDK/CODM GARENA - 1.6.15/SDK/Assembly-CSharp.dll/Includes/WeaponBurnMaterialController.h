#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WeaponBurnMaterialController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WeaponBurnMaterialController"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_FloatUpdaters() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_ColorUpdaters() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_Materials() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CurOffset() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& m_FlowSpeedXID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_FlowSpeedYID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_NoiseTexID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayBurnAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WeaponBurnMaterialController*))(Il2CppBase() + 0x4893168))(this);
	}
	template <typename T = void> T PlayBurnAnim(bool burn, float time) {
		return ((T (*)(WeaponBurnMaterialController*, bool, float))(Il2CppBase() + 0x48933F0))(this, burn, time);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponBurnMaterialController*))(Il2CppBase() + 0x489359C))(this);
	}

};

}
