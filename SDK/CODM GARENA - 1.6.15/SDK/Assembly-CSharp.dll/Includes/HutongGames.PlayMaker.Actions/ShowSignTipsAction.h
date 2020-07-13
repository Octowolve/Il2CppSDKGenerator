#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ShowSignTipsAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ShowSignTipsAction"));
	}

	template <typename T = uintptr_t> T& m_StrMessage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_Show() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_ShowFocusSign() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = Il2CppString*> T& m_TargetName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_TargetOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_ArrowType() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_FinishStateImmediately() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ShowSignTipsAction*))(Il2CppBase() + 0x502ED10))(this);
	}

};

}
