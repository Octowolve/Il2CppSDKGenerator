#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WWiseGameObjectPosData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WWiseGameObjectPosData"));
	}

	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& forward() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& up() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
