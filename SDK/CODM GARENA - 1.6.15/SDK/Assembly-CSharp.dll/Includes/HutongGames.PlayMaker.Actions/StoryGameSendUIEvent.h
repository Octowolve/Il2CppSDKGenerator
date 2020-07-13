#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameSendUIEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameSendUIEvent"));
	}

	template <typename T = uintptr_t> T& m_EventType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_StoryGameUIEventEnum() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_PVEUIEventEnum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_BaseGameUIEventEnum() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& m_StoryGameUIEventEnumStr() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& m_PVEUIEventEnumStr() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& m_BaseGameUIEventEnumStr() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_ParamType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_FloatParam() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_IntParam() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_BoolParam() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_StringParam() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_GameObjectParam() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameSendUIEvent*))(Il2CppBase() + 0x4F15074))(this);
	}
	template <typename T = void> T SendEventWithParam(uint32_t uSendEnum) {
		return ((T (*)(StoryGameSendUIEvent*, uint32_t))(Il2CppBase() + 0x4F15390))(this, uSendEnum);
	}

};

}
