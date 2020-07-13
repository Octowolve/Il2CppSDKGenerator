#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class RunnableActionDialog
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "RunnableAction_Dialog"));
	}

	template <typename T = Il2CppString*> static T& DialogPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DialogEndName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& TextID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& VoiceID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& IconSpriteName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& DisplayInterval() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& Duration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& RightSide() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& Offset() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RunnableActionDialog*))(Il2CppBase() + 0x4FAC770))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(RunnableActionDialog*))(Il2CppBase() + 0x4FAC858))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(RunnableActionDialog*))(Il2CppBase() + 0x4FAC878))(this);
	}
	template <typename T = void> T End() {
		return ((T (*)(RunnableActionDialog*))(Il2CppBase() + 0x4FAC8B4))(this);
	}

};

}
