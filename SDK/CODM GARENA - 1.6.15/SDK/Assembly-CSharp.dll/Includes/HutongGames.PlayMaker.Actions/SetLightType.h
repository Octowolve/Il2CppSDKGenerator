#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class SetLightType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "SetLightType"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& lightType() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(SetLightType*))(Il2CppBase() + 0x5027F50))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(SetLightType*))(Il2CppBase() + 0x5028000))(this);
	}
	template <typename T = void> T DoSetLightType() {
		return ((T (*)(SetLightType*))(Il2CppBase() + 0x5028020))(this);
	}

};

}
