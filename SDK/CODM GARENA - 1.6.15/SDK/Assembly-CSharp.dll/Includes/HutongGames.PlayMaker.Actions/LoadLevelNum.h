#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LoadLevelNum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LoadLevelNum"));
	}

	template <typename T = uintptr_t> T& levelIndex() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& additive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& loadedEvent() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& dontDestroyOnLoad() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& failedEvent() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(LoadLevelNum*))(Il2CppBase() + 0x4D75D54))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LoadLevelNum*))(Il2CppBase() + 0x4D75D88))(this);
	}

};

}
