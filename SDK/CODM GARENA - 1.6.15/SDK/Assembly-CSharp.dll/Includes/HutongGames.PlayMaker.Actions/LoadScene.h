#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class LoadScene
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "LoadScene"));
	}

	template <typename T = uintptr_t> T& sceneReference() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& sceneByName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& sceneAtIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& loadSceneMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& success() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& successEvent() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& failureEvent() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _scene() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& _sceneFound() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(LoadScene*))(Il2CppBase() + 0x4D75F48))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(LoadScene*))(Il2CppBase() + 0x4D75F60))(this);
	}
	template <typename T = bool> T DoLoadScene() {
		return ((T (*)(LoadScene*))(Il2CppBase() + 0x4D75FFC))(this);
	}

};

}
