#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BankCallbackPackage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BankCallbackPackage"));
	}

	template <typename T = uintptr_t> T& m_Callback() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Cookie() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
