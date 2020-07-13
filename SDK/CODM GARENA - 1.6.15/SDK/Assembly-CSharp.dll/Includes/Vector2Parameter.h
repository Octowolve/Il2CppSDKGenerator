#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Vector2Parameter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Vector2Parameter"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Interp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Interp(Il2CppVector2 from, Il2CppVector2 to, float t) {
		return ((T (*)(Vector2Parameter*, Il2CppVector2, Il2CppVector2, float))(Il2CppBase() + 0x48862E0))(this, from, to, t);
	}

};

}
