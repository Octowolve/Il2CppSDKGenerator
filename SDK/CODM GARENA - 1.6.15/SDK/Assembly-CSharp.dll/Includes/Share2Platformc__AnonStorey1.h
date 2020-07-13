#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Share2PlatformcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<Share2Platform>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& platform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& eTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T m__0(uintptr_t texture) {
		return ((T (*)(Share2PlatformcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x497FA60))(this, texture);
	}
	template <typename T = void> static T m__1(bool boolValue) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x497FBC4))(0, boolValue);
	}

};

}
