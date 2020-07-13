#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Utils {

class WwiseEventMeta
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Utils", "WwiseEventMeta"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Infos() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EventRedirectInfos() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
