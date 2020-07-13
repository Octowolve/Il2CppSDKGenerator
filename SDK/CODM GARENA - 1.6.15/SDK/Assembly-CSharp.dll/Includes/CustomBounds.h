#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomBounds
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomBounds"));
	}

	template <typename T = uintptr_t> T& NewBounds() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& FocusOnBounds() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mOldBounds() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& mMF() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mFocusOn() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleShadow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(CustomBounds*))(Il2CppBase() + 0x415C7C0))(this);
	}
	template <typename T = void> T ToggleShadow(bool enable) {
		return ((T (*)(CustomBounds*, bool))(Il2CppBase() + 0x415CA84))(this, enable);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CustomBounds*))(Il2CppBase() + 0x415CC70))(this);
	}

};

}
