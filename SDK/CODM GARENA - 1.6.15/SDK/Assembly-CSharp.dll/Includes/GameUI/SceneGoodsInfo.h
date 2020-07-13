#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SceneGoodsInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SceneGoodsInfo"));
	}

	template <typename T = uint32_t> T& ActorID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& OwnerPlayerID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& TeamNumID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& GoodsType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& MPropPawn() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& LifeTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& LeftLifeTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
