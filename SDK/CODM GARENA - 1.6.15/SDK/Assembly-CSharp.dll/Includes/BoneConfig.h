#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BoneConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BoneConfig"));
	}

	template <typename T = bool> T& isValid() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& Offset() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& Rotate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& Scale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_op_Addition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uintptr_t> T get_trs() {
		return ((T (*)(BoneConfig*))(Il2CppBase() + 0x35FD07C))(this);
	}
	template <typename T = uintptr_t> T get_bagTRS() {
		return ((T (*)(BoneConfig*))(Il2CppBase() + 0x35FD090))(this);
	}
	template <typename T = uintptr_t> T get_InverseTrs() {
		return ((T (*)(BoneConfig*))(Il2CppBase() + 0x35FD0A4))(this);
	}
	template <typename T = uintptr_t> static T op_Addition(uintptr_t left, uintptr_t right) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x35F1110))(0, left, right);
	}

};

}
