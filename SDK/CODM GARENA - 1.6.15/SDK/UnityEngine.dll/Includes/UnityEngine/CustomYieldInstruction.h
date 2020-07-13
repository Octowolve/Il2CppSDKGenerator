#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CustomYieldInstruction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CustomYieldInstruction"));
	}


	template <typename T = bool> T get_keepWaiting() {
		return ((T (*)(CustomYieldInstruction*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(CustomYieldInstruction*))(Il2CppBase() + 0x4DA43E8))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(CustomYieldInstruction*))(Il2CppBase() + 0x4DA43F0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(CustomYieldInstruction*))(Il2CppBase() + 0x4DA4400))(this);
	}

};

}
