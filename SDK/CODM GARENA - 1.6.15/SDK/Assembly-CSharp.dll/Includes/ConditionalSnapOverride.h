#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConditionalSnapOverride
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConditionalSnapOverride"));
	}

	template <typename T = void*> T& m_IsEnabledDelegate() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T IsEnabled() {
		return ((T (*)(ConditionalSnapOverride*))(Il2CppBase() + 0x4814E28))(this);
	}

};

}
