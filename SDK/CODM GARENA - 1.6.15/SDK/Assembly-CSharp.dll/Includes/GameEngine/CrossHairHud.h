#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class CrossHairHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "CrossHairHud"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& m_CrossHairArr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_CustomCrossHair() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_CustomCrossHairDistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_CurCrossHair() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_CustomCrossHairRenderer() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_UseCustomCrossHair() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& m_CrossHairIndex() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_CrossHairShow() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& m_LastLockState() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = bool> T& m_IsLockState() {
		return *(T*)((uintptr_t)this + 0x32);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowOrHideCrossHair() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitCrossHairTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseCrossHairHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateHoldWeaponState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T ShowOrHideCrossHair(int32_t index, bool value) {
		return ((T (*)(CrossHairHud*, int32_t, bool))(Il2CppBase() + 0x41AA040))(this, index, value);
	}
	template <typename T = void> T InitCrossHairTexture(int32_t index, int32_t materialID) {
		return ((T (*)(CrossHairHud*, int32_t, int32_t))(Il2CppBase() + 0x41AA348))(this, index, materialID);
	}
	template <typename T = void> T ReleaseCrossHairHud() {
		return ((T (*)(CrossHairHud*))(Il2CppBase() + 0x41AA6A4))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(CrossHairHud*))(Il2CppBase() + 0x41AA7E4))(this);
	}
	template <typename T = void> T UpdateHoldWeaponState() {
		return ((T (*)(CrossHairHud*))(Il2CppBase() + 0x41AA888))(this);
	}

};

}
