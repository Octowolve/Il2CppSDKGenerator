#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class StoryGameCheckPlayerRotation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "StoryGameCheckPlayerRotation"));
	}

	template <typename T = uintptr_t> T& MatchObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Threshold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& ForceMatchPlayerRotation() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& TrueEvent() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& LastPlayerRot() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(StoryGameCheckPlayerRotation*))(Il2CppBase() + 0x5035018))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(StoryGameCheckPlayerRotation*))(Il2CppBase() + 0x503501C))(this);
	}

};

}
