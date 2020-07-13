#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class WaitForSecondsRealtime
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "WaitForSecondsRealtime"));
	}

	template <typename T = float> T& waitTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T get_keepWaiting() {
		return ((T (*)(WaitForSecondsRealtime*))(Il2CppBase() + 0x4D3DEC8))(this);
	}

};

}
