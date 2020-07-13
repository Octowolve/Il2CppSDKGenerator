#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PopupRoleShowcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PopupRoleShow>c__AnonStorey0"));
	}

	template <typename T = uintptr_t> T& scene() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& faceData() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T m__0() {
		return ((T (*)(PopupRoleShowcAnonStorey0*))(Il2CppBase() + 0x4BE1B2C))(this);
	}

};

}
