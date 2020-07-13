#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ConfigData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ConfigData"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& MeshID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MaterialsID() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
