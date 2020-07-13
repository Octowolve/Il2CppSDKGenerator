#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class PVEIActionSendGameEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "PVEIAction_SendGameEvent"));
	}

	template <typename T = uintptr_t> T& m_GameObjectParam() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_StringParam() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_FloatParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_IntParam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_GameEventEnum() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(PVEIActionSendGameEvent*))(Il2CppBase() + 0x4D7FFC8))(this);
	}

};

}
