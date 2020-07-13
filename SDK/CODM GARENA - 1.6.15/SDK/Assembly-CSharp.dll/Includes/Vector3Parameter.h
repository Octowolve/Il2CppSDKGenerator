#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vector3Parameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vector3Parameter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Interp(Il2CppVector3 from, Il2CppVector3 to, float t) {
		return ((T (*)(Vector3Parameter*, Il2CppVector3, Il2CppVector3, float))(Il2CppBase() + 0x4886494))(this, from, to, t);
	}

};

}
