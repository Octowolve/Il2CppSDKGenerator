#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneIsLoaded
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneIsLoaded"));
	}

	template <typename T = uintptr_t> T& isLoaded() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& isLoadedEvent() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& isNotLoadedEvent() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x5C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneIsLoaded*))(Il2CppBase() + 0x50931E0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneIsLoaded*))(Il2CppBase() + 0x5093218))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSceneIsLoaded*))(Il2CppBase() + 0x50932D8))(this);
	}
	template <typename T = void> T DoGetSceneIsLoaded() {
		return ((T (*)(GetSceneIsLoaded*))(Il2CppBase() + 0x509324C))(this);
	}

};

}
