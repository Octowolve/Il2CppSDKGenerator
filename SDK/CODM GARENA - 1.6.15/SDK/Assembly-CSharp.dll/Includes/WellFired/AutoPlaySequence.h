#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class AutoPlaySequence
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "AutoPlaySequence"));
	}

	template <typename T = uintptr_t> T& sequence() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& delay() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& currentTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& hasPlayed() {
		return *(T*)((uintptr_t)this + 0x18);
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

	template <typename T = void> T Start() {
		return ((T (*)(AutoPlaySequence*))(Il2CppBase() + 0x4A34250))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AutoPlaySequence*))(Il2CppBase() + 0x4A343B4))(this);
	}

};

}
