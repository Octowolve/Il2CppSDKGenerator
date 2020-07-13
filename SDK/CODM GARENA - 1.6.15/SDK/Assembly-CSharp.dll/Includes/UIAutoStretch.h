#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIAutoStretch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIAutoStretch"));
	}

	template <typename T = uintptr_t> T& Target() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update() {
		return ((T (*)(UIAutoStretch*))(Il2CppBase() + 0x42643E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(UIAutoStretch*))(Il2CppBase() + 0x4264700))(this);
	}

};

}
