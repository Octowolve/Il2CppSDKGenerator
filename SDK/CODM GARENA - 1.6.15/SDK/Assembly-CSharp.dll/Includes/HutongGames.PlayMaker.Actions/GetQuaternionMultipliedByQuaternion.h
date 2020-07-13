#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetQuaternionMultipliedByQuaternion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetQuaternionMultipliedByQuaternion"));
	}

	template <typename T = uintptr_t> T& quaternionA() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& quaternionB() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetQuaternionMultipliedByQuaternion*))(Il2CppBase() + 0x5090208))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetQuaternionMultipliedByQuaternion*))(Il2CppBase() + 0x5090220))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetQuaternionMultipliedByQuaternion*))(Il2CppBase() + 0x5090300))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetQuaternionMultipliedByQuaternion*))(Il2CppBase() + 0x5090310))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(GetQuaternionMultipliedByQuaternion*))(Il2CppBase() + 0x5090320))(this);
	}
	template <typename T = void> T DoQuatMult() {
		return ((T (*)(GetQuaternionMultipliedByQuaternion*))(Il2CppBase() + 0x509024C))(this);
	}

};

}
