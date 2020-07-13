#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BakeList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BakeList"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& BuildingList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(BakeList*))(Il2CppBase() + 0x325248C))(this);
	}

};

}
