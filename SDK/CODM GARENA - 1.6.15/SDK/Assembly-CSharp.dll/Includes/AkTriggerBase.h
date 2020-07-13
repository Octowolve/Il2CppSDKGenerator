#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkTriggerBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkTriggerBase"));
	}

	template <typename T = uintptr_t> T& triggerDelegate() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> static T GetAllDerivedTypes() {
		return ((T (*)(void *))(Il2CppBase() + 0x22AECE4))(0);
	}

};

}
