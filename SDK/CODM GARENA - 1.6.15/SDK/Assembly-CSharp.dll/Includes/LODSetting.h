#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LODSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LODSetting"));
	}

	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& Node() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
