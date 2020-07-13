#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Entry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "", "Entry"));
	}

	template <typename T = uintptr_t> T& eventID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& callback() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
