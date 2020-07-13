#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SpawnDroppedPickUpAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SpawnDroppedPickUpAction"));
	}

	template <typename T = uintptr_t> T& Pos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& PickUpType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(SpawnDroppedPickUpAction*))(Il2CppBase() + 0x5031110))(this);
	}

};

}
