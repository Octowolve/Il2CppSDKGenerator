#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StoreDataArray1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "StoreDataArray`1"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _array() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
