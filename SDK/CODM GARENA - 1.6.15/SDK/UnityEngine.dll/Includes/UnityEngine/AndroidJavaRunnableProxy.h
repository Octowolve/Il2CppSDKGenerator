#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AndroidJavaRunnableProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AndroidJavaRunnableProxy"));
	}

	template <typename T = uintptr_t> T& mRunnable() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T run() {
		return ((T (*)(AndroidJavaRunnableProxy*))(Il2CppBase() + 0x4685CC4))(this);
	}
	template <typename T = Il2CppString*> T toString() {
		return ((T (*)(AndroidJavaRunnableProxy*))(Il2CppBase() + 0x4685CF0))(this);
	}

};

}
