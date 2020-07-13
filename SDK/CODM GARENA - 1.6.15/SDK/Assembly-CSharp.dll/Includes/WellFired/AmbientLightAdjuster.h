#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired {

class AmbientLightAdjuster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired", "AmbientLightAdjuster"));
	}

	template <typename T = uintptr_t> T& ambientLightColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Update() {
		return ((T (*)(AmbientLightAdjuster*))(Il2CppBase() + 0x4A340E0))(this);
	}

};

}
