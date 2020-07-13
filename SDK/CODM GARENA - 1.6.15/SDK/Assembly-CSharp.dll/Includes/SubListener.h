#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SubListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SubListener"));
	}

	template <typename T = int32_t> T& ListenerPriority() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& ListenerObj() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DelegateComp() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T IsEmpty() {
		return ((T (*)(SubListener*))(Il2CppBase() + 0x4500508))(this);
	}
	template <typename T = void> T GetDebugString(uintptr_t sbBuf) {
		return ((T (*)(SubListener*, uintptr_t))(Il2CppBase() + 0x4502E60))(this, sbBuf);
	}

};

}
