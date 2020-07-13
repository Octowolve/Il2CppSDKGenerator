#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetQuaternionMultipliedByVector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetQuaternionMultipliedByVector"));
	}

	template <typename T = uintptr_t> T& quaternion() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& vector3() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& result() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetQuaternionMultipliedByVector*))(Il2CppBase() + 0x5090338))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetQuaternionMultipliedByVector*))(Il2CppBase() + 0x5090350))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetQuaternionMultipliedByVector*))(Il2CppBase() + 0x5090420))(this);
	}
	template <typename T = void> T OnLateUpdate() {
		return ((T (*)(GetQuaternionMultipliedByVector*))(Il2CppBase() + 0x5090430))(this);
	}
	template <typename T = void> T OnFixedUpdate() {
		return ((T (*)(GetQuaternionMultipliedByVector*))(Il2CppBase() + 0x5090440))(this);
	}
	template <typename T = void> T DoQuatMult() {
		return ((T (*)(GetQuaternionMultipliedByVector*))(Il2CppBase() + 0x509037C))(this);
	}

};

}
