#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.Utils {

class WwiseBankNameInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.Utils", "WwiseBankNameInfo"));
	}

	template <typename T = Il2CppString*> T& RealName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& StorageName() {
		return *(T*)((uintptr_t)this + 0xC);
	}


};

}
