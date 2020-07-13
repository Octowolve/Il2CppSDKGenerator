#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUInputNodeUICache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_InputNodeUICache"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _inputObjectCache() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
