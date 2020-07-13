#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MissileFlyInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MissileFlyInfo"));
	}

	template <typename T = int32_t> T& itemID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppVector3> T& veloctiy() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& state() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& timeElapsedMS() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& actorID() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
