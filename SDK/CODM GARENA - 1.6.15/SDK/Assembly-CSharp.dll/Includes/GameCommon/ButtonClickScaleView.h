#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameCommon {

class ButtonClickScaleView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameCommon", "ButtonClickScaleView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& ObjTransformList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& OnPressScale() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& OffPressScale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnPress(bool isPressed) {
		return ((T (*)(ButtonClickScaleView*, bool))(Il2CppBase() + 0x49F00CC))(this, isPressed);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ButtonClickScaleView*))(Il2CppBase() + 0x49F02DC))(this);
	}

};

}
