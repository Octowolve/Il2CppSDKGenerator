#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class WwisePostEventOnLevelObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "WwisePostEventOnLevelObj"));
	}

	template <typename T = Il2CppString*> T& LevelObjID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& WwiseEvent() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& audio() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(WwisePostEventOnLevelObj*))(Il2CppBase() + 0x4F20E20))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(WwisePostEventOnLevelObj*))(Il2CppBase() + 0x4F20EF8))(this);
	}

};

}
