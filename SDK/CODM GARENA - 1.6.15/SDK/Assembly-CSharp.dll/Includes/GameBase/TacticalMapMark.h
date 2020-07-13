#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalMapMark
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalMapMark"));
	}

	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& GPS() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
