#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGeneratedOutputData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GeneratedOutputData"));
	}

	template <typename T = uintptr_t> T& _gameObject() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _renderMaterials() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
