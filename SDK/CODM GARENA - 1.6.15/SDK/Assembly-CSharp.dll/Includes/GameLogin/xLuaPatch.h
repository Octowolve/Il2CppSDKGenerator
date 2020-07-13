#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class xLuaPatch
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "xLuaPatch"));
	}

	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& md5() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& versions() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
