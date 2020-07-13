#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "StoreData"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _valueStr() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
