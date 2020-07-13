#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LocalPlayerMoveToAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LocalPlayerMoveToAction"));
	}

	template <typename T = uintptr_t> T& m_MoveToTarget() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(LocalPlayerMoveToAction*))(Il2CppBase() + 0x4D76C64))(this);
	}

};

}
