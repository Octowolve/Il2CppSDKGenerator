#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuglyCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuglyCallback"));
	}


	template <typename T = void> T OnApplicationLogCallbackHandler(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(BuglyCallback*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, condition, stackTrace, type);
	}

};

}
