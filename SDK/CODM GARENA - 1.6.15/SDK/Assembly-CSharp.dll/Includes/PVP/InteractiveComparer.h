#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class InteractiveComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "InteractiveComparer"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Compare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T Compare(uintptr_t x, uintptr_t y) {
		return ((T (*)(InteractiveComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3481F74))(this, x, y);
	}

};

}
