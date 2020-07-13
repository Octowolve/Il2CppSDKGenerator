#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class ShowPrepareAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "ShowPrepareAction"));
	}

	template <typename T = float> T& PrepareTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_StartTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T OnEnter() {
		return ((T (*)(ShowPrepareAction*))(Il2CppBase() + 0x502E880))(this);
	}
	template <typename T = void> T DoActivate() {
		return ((T (*)(ShowPrepareAction*))(Il2CppBase() + 0x502E884))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(ShowPrepareAction*))(Il2CppBase() + 0x502EB8C))(this);
	}

};

}
