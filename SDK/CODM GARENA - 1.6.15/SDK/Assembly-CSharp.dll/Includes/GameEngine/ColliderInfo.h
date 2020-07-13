#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class ColliderInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "ColliderInfo"));
	}

	template <typename T = uintptr_t> T& ColliderObj() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Layer() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
