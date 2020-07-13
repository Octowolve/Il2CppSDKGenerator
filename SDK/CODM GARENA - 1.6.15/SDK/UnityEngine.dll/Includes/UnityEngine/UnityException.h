#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class UnityException
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "UnityException"));
	}

	template <typename T = int32_t> static T& Result() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& unityStackTrace() {
		return *(T*)((uintptr_t)this + 0x34);
	}


};

}
