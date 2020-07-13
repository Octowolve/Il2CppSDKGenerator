#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CrossHairViewBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CrossHairViewBase"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_Params() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& CrossHairType() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCrosshairDisplay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCrosshairActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBorder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_Params() {
		return ((T (*)(CrossHairViewBase*))(Il2CppBase() + 0x3DF9FEC))(this);
	}
	template <typename T = uintptr_t> T get_CrossHairType() {
		return ((T (*)(CrossHairViewBase*))(Il2CppBase() + 0x3DF9ECC))(this);
	}
	template <typename T = void> T set_CrossHairType(uintptr_t value) {
		return ((T (*)(CrossHairViewBase*, uintptr_t))(Il2CppBase() + 0x3DF99E4))(this, value);
	}
	template <typename T = void> T SetCrosshairDisplay(bool isShow) {
		return ((T (*)(CrossHairViewBase*, bool))(Il2CppBase() + 0x3DFC144))(this, isShow);
	}
	template <typename T = bool> T IsCrosshairActive() {
		return ((T (*)(CrossHairViewBase*))(Il2CppBase() + 0x3DFC204))(this);
	}
	template <typename T = bool> T CanChanged() {
		return ((T (*)(CrossHairViewBase*))(Il2CppBase() + 0x3DFC2C4))(this);
	}
	template <typename T = void> T OnChanged(uintptr_t Msg) {
		return ((T (*)(CrossHairViewBase*, uintptr_t))(Il2CppBase() + 0x3DFC364))(this, Msg);
	}
	template <typename T = float> T GetBorder() {
		return ((T (*)(CrossHairViewBase*))(Il2CppBase() + 0x3DFC488))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(CrossHairViewBase*))(Il2CppBase() + 0x3DFC52C))(this);
	}

};

}
