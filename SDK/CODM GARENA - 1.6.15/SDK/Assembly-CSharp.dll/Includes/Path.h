#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Path
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Path"));
	}

	template <typename T = float> T& timeCreated() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& fadeAlpha() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& localPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& localRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_timeElapsed() {
		return ((T (*)(Path*))(Il2CppBase() + 0x417B7B8))(this);
	}

};

}
