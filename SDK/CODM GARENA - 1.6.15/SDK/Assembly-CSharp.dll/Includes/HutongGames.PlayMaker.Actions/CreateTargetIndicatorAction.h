#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class CreateTargetIndicatorAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "CreateTargetIndicatorAction"));
	}

	template <typename T = uintptr_t> T& indicatorGameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& pos() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& localSpace() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& showMsgType() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& msgLocID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& hideDistance() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(CreateTargetIndicatorAction*))(Il2CppBase() + 0x4FBF87C))(this);
	}

};

}
