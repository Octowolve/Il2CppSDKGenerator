#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UITabToggle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UITabToggle"));
	}

	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& TabIndex() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTabChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(UITabToggle*))(Il2CppBase() + 0x3B17960))(this);
	}
	template <typename T = void> T OnTabChanged() {
		return ((T (*)(UITabToggle*))(Il2CppBase() + 0x3B17A84))(this);
	}

};

}
