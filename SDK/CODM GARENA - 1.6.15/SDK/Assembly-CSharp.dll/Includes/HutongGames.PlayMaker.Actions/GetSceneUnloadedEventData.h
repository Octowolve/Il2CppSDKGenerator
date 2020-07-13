#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneUnloadedEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneUnloadedEventData"));
	}

	template <typename T = uintptr_t> T& name() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& path() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& buildIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& isValid() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& isLoaded() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& isDirty() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& rootCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& rootGameObjects() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _scene() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneUnloadedEventData*))(Il2CppBase() + 0x4EFE920))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneUnloadedEventData*))(Il2CppBase() + 0x4EFE944))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSceneUnloadedEventData*))(Il2CppBase() + 0x4EFEC58))(this);
	}
	template <typename T = void> T DoGetSceneProperties() {
		return ((T (*)(GetSceneUnloadedEventData*))(Il2CppBase() + 0x4EFE970))(this);
	}

};

}
