#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class FocusByMaskAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "FocusByMaskAction"));
	}

	template <typename T = bool> T& m_Show() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& m_UseMask() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = Il2CppVector2> T& FocusCenter() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& FocusSize() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& TargetName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_FinishStateImmediately() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(FocusByMaskAction*))(Il2CppBase() + 0x50516E8))(this);
	}

};

}
