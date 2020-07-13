#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneProperties
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneProperties"));
	}

	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& buildIndex() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& isValid() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& isLoaded() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& rootCount() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& rootGameObjects() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneProperties*))(Il2CppBase() + 0x4EFE428))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneProperties*))(Il2CppBase() + 0x4EFE45C))(this);
	}
	template <typename T = void> T DoGetSceneProperties() {
		return ((T (*)(GetSceneProperties*))(Il2CppBase() + 0x4EFE494))(this);
	}

};

}
