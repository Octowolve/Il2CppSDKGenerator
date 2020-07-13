#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class ILogHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "ILogHandler"));
	}


	template <typename T = void> T LogFormat(uintptr_t logType, uintptr_t context, Il2CppString* format, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(ILogHandler*, uintptr_t, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, logType, context, format, args);
	}
	template <typename T = void> T LogException(uintptr_t exception, uintptr_t context) {
		return ((T (*)(ILogHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, exception, context);
	}

};

}
