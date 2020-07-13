#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class Color32
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Color32"));
	}

	template <typename T = unsigned char> T& r() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = unsigned char> T& g() {
		return *(T*)((uintptr_t)this + 0x1);
	}
	template <typename T = unsigned char> T& b() {
		return *(T*)((uintptr_t)this + 0x2);
	}
	template <typename T = unsigned char> T& a() {
		return *(T*)((uintptr_t)this + 0x3);
	}

	template <typename T = uintptr_t> static T op_Implicit(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA043C))(0, c);
	}
	template <typename T = uintptr_t> static T op_Implicit_1(uintptr_t c) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DA057C))(0, c);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Color32*))(Il2CppBase() + 0x4DA0850))(this);
	}

};

}
