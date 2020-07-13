#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameMessageAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameMessageAction"));
	}

	template <typename T = uintptr_t> T& m_StrMessage() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& m_Show() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& m_ChangeColor() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = uintptr_t> T& m_FinishStateImmediately() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_LinkOffset() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& m_LinkTargetOffset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& m_LinkTargetName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_LinkTargets() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& ForcePlayAnim() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& ShowLinkOnlyTargetActive() {
		return *(T*)((uintptr_t)this + 0x55);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameMessageAction*))(Il2CppBase() + 0x5036C28))(this);
	}

};

}
