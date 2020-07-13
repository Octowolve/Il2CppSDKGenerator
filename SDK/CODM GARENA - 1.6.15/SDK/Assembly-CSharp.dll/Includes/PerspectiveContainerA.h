#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PerspectiveContainerA
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PerspectiveContainerA"));
	}

	template <typename T = uintptr_t> T& Container() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& FadeEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Normalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Fade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Normalize() {
		return ((T (*)(PerspectiveContainerA*))(Il2CppBase() + 0x3B129BC))(this);
	}
	template <typename T = void> T Fade(bool fadein) {
		return ((T (*)(PerspectiveContainerA*, bool))(Il2CppBase() + 0x3B12C90))(this, fadein);
	}

};

}
