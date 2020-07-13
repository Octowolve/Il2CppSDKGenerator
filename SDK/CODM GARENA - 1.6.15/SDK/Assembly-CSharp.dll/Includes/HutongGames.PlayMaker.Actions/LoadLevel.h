#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LoadLevel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LoadLevel"));
	}

	template <typename T = uintptr_t> T& levelName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& additive() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& async() {
		return *(T*)((uintptr_t)this + 0x2D);
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
	template <typename T = uintptr_t> T& asyncOperation() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(LoadLevel*))(Il2CppBase() + 0x4D757B4))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LoadLevel*))(Il2CppBase() + 0x4D7589C))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(LoadLevel*))(Il2CppBase() + 0x4D75CE8))(this);
	}

};

}
