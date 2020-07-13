#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RenderpipeProfile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RenderpipeProfile"));
	}

	template <typename T = bool> T& changed() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ACES() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Bloom() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& RazorTonemappingSetting() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& RazorTonemappingRuntimeData() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_changed() {
		return ((T (*)(RenderpipeProfile*))(Il2CppBase() + 0x4196724))(this);
	}
	template <typename T = void> T set_changed(bool value) {
		return ((T (*)(RenderpipeProfile*, bool))(Il2CppBase() + 0x419672C))(this, value);
	}

};

}
