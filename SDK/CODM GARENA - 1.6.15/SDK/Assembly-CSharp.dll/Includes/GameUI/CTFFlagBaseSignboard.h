#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CTFFlagBaseSignboard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CTFFlagBaseSignboard"));
	}

	template <typename T = uintptr_t> T& SignRoot() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& SignSprite() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateLabelImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeAlpha() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(CTFFlagBaseSignboard*))(Il2CppBase() + 0x3DFD1DC))(this);
	}
	template <typename T = void> T UpdateLabelImpl() {
		return ((T (*)(CTFFlagBaseSignboard*))(Il2CppBase() + 0x3DFD2D4))(this);
	}
	template <typename T = void> T ChangeAlpha(float newAlpha) {
		return ((T (*)(CTFFlagBaseSignboard*, float))(Il2CppBase() + 0x3DFD5B8))(this, newAlpha);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(CTFFlagBaseSignboard*))(Il2CppBase() + 0x3DFD6BC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateLabelImpl() {
		return ((T (*)(CTFFlagBaseSignboard*))(Il2CppBase() + 0x3DFD6C4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ChangeAlpha(float P0) {
		return ((T (*)(CTFFlagBaseSignboard*, float))(Il2CppBase() + 0x3DFD6CC))(this, P0);
	}

};

}
