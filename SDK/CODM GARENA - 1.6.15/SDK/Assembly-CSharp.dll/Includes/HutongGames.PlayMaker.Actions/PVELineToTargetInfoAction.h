#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PVELineToTargetInfoAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PVELineToTargetInfoAction"));
	}

	template <typename T = uintptr_t> T& m_ContentKey() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_FinishStateImmediately() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_Offset() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PVELineToTargetInfoAction*))(Il2CppBase() + 0x4D80430))(this);
	}

};

}
