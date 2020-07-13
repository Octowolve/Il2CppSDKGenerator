#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameSendStringUIEnumEvent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameSendStringUIEnumEvent"));
	}

	template <typename T = uintptr_t> T& m_GameUIEnumEventString() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_ParamType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_FloatParam() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_IntParam() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_BoolParam() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_GameObjectParam() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& EnumTypeToParse() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(StoryGameSendStringUIEnumEvent*))(Il2CppBase() + 0x4F147AC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameSendStringUIEnumEvent*))(Il2CppBase() + 0x4F149EC))(this);
	}
	template <typename T = void> T SendEventWithParam(uint32_t uSendEnum) {
		return ((T (*)(StoryGameSendStringUIEnumEvent*, uint32_t))(Il2CppBase() + 0x4F14CD0))(this, uSendEnum);
	}

};

}
