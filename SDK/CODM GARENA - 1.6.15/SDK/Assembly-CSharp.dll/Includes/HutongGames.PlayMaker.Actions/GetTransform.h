#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetTransform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetTransform"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& storeTransform() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetTransform*))(Il2CppBase() + 0x4F00624))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetTransform*))(Il2CppBase() + 0x4F006E4))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetTransform*))(Il2CppBase() + 0x4F00820))(this);
	}
	template <typename T = void> T DoGetGameObjectName() {
		return ((T (*)(GetTransform*))(Il2CppBase() + 0x4F00710))(this);
	}

};

}
