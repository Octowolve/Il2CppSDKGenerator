#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DestructibleSceneObjectInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DestructibleSceneObjectInfo"));
	}

	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& UID() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& HP() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& Status1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& Status2() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
