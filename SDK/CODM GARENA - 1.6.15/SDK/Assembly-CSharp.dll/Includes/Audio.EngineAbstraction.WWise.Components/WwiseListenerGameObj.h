#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Audio.EngineAbstraction.WWise.Components {

class WwiseListenerGameObj
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Audio.EngineAbstraction.WWise.Components", "WwiseListenerGameObj"));
	}

	template <typename T = uintptr_t> T& mSubGameObj() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& mSubListener() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = uintptr_t> T get_SubGameObj() {
		return ((T (*)(WwiseListenerGameObj*))(Il2CppBase() + 0x44FAB1C))(this);
	}
	template <typename T = uintptr_t> T get_SubListener() {
		return ((T (*)(WwiseListenerGameObj*))(Il2CppBase() + 0x44FAB24))(this);
	}
	template <typename T = void> T UpdateSubListener(uintptr_t goTarget) {
		return ((T (*)(WwiseListenerGameObj*, uintptr_t))(Il2CppBase() + 0x44FAB2C))(this, goTarget);
	}
	template <typename T = Il2CppVector3> T GetForward() {
		return ((T (*)(WwiseListenerGameObj*))(Il2CppBase() + 0x44FAC24))(this);
	}
	template <typename T = Il2CppVector3> T GetPosition(bool needUpdateCachedTransform) {
		return ((T (*)(WwiseListenerGameObj*, bool))(Il2CppBase() + 0x44FAE10))(this, needUpdateCachedTransform);
	}
	template <typename T = Il2CppVector3> T GetUpward() {
		return ((T (*)(WwiseListenerGameObj*))(Il2CppBase() + 0x44FB08C))(this);
	}

};

}
