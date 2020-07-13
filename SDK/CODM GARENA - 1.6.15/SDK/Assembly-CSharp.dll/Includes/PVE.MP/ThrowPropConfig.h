#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.MP {

class ThrowPropConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.MP", "ThrowPropConfig"));
	}

	template <typename T = uintptr_t> T& throwAnim() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& prepareTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& throwPropSchemeId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_throwDuration() {
		return ((T (*)(ThrowPropConfig*))(Il2CppBase() + 0x435D7FC))(this);
	}

};

}
