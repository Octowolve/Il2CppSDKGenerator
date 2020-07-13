#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneLoadedEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneLoadedEventData"));
	}

	template <typename T = uintptr_t> T& loadedMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isValid() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& buildIndex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& isLoaded() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& rootCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& rootGameObjects() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _scene() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneLoadedEventData*))(Il2CppBase() + 0x4EFDEC8))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneLoadedEventData*))(Il2CppBase() + 0x4EFDEE8))(this);
	}
	template <typename T = void> T DoGetSceneProperties() {
		return ((T (*)(GetSceneLoadedEventData*))(Il2CppBase() + 0x4EFDF08))(this);
	}

};

}
