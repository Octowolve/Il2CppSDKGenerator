#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class ButtonClickChangeView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "ButtonClickChangeView"));
	}

	template <typename T = Il2CppString*> T& TypeName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& scale() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& TweenScaleTimes() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppVector3> T get_ScaleFrom() {
		return ((T (*)(ButtonClickChangeView*))(Il2CppBase() + 0x49EEEF8))(this);
	}
	template <typename T = Il2CppVector3> T get_ScaleTo() {
		return ((T (*)(ButtonClickChangeView*))(Il2CppBase() + 0x49EF014))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ButtonClickChangeView*))(Il2CppBase() + 0x49EF064))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ButtonClickChangeView*))(Il2CppBase() + 0x49EF1BC))(this);
	}
	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(ButtonClickChangeView*, bool))(Il2CppBase() + 0x49EF254))(this, isPressed);
	}

};

}
