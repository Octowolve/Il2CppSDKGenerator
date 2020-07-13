#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneIsDirty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneIsDirty"));
	}

	template <typename T = uintptr_t> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& isDirtyEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& isNotDirtyEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneIsDirty*))(Il2CppBase() + 0x50930DC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneIsDirty*))(Il2CppBase() + 0x5093114))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSceneIsDirty*))(Il2CppBase() + 0x50931D4))(this);
	}
	template <typename T = void> T DoGetSceneIsDirty() {
		return ((T (*)(GetSceneIsDirty*))(Il2CppBase() + 0x5093148))(this);
	}

};

}
