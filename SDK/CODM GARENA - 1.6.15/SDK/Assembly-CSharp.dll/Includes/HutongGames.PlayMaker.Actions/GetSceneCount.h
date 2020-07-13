#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetSceneCount
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetSceneCount"));
	}

	template <typename T = uintptr_t> T& sceneCount() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetSceneCount*))(Il2CppBase() + 0x5092FE0))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetSceneCount*))(Il2CppBase() + 0x5092FF0))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetSceneCount*))(Il2CppBase() + 0x509305C))(this);
	}
	template <typename T = void> T DoGetSceneCount() {
		return ((T (*)(GetSceneCount*))(Il2CppBase() + 0x509301C))(this);
	}

};

}
