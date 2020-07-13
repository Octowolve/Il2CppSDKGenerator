#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEventCallbackData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEventCallbackData"));
	}

	template <typename T = Il2CppList<int32_t>*> T& callbackFlags() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& callbackFunc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& callbackGameObj() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& uFlags() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
