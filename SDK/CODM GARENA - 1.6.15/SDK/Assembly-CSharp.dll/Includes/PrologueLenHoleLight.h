#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrologueLenHoleLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrologueLenHoleLight"));
	}

	template <typename T = uintptr_t> T& lensEffect() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxBrightness() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minBrightness() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& camDisLen() {
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
		return ((T (*)(PrologueLenHoleLight*))(Il2CppBase() + 0x4CDA07C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PrologueLenHoleLight*))(Il2CppBase() + 0x4CDA1B4))(this);
	}

};

}
