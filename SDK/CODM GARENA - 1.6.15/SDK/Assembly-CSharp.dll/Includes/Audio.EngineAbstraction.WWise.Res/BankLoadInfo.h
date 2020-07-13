#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Res {

class BankLoadInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Res", "BankLoadInfo"));
	}

	template <typename T = Il2CppString*> T& BankName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& LoadTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& UpdateTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
