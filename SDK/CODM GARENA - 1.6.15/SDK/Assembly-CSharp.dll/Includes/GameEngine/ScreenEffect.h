#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ScreenEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ScreenEffect"));
	}

	template <typename T = bool> T& PlayOnStart() {
		return *(T*)((uintptr_t)this + 0x31);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnchor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdjustSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ScreenEffect*))(Il2CppBase() + 0x33F1CA0))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ScreenEffect*))(Il2CppBase() + 0x33F1D5C))(this);
	}
	template <typename T = void> T SetAnchor(uintptr_t anchorType) {
		return ((T (*)(ScreenEffect*, uintptr_t))(Il2CppBase() + 0x33F20C8))(this, anchorType);
	}
	template <typename T = void> T AdjustSize(float originWidth, float originHeight) {
		return ((T (*)(ScreenEffect*, float, float))(Il2CppBase() + 0x33F22A4))(this, originWidth, originHeight);
	}

};

}
