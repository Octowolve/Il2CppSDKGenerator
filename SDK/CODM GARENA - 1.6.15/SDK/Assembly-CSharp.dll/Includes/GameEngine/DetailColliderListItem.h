#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DetailColliderListItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DetailColliderListItem"));
	}

	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& transform() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& tag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& hitGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
