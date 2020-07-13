#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PresetInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PresetInfo"));
	}

	template <typename T = uintptr_t> T& preset() {
		return *(T*)((uintptr_t)this + 0x0);
	}


};

}
