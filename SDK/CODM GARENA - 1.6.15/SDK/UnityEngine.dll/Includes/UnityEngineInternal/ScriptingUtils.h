#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngineInternal {

class ScriptingUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngineInternal", "ScriptingUtils"));
	}


	template <typename T = uintptr_t> static T CreateDelegate(uintptr_t type, uintptr_t methodInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4D423B0))(0, type, methodInfo);
	}

};

}
