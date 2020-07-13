#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Threading {

class CompressedStack
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Threading", "CompressedStack"));
	}

	template <typename T = uintptr_t> T& _list() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T CreateCopy() {
		return ((T (*)(CompressedStack*))(Il2CppBase() + 0x4D87954))(this);
	}
	template <typename T = uintptr_t> static T Capture() {
		return ((T (*)(void *))(Il2CppBase() + 0x4D879E4))(0);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(CompressedStack*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D87C6C))(this, info, context);
	}
	template <typename T = bool> T IsEmpty() {
		return ((T (*)(CompressedStack*))(Il2CppBase() + 0x4D87D20))(this);
	}

};

}
