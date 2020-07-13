#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAITakeDamageComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAITakeDamageComponent"));
	}

	template <typename T = uintptr_t> T& m_FireEffect() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_LastPlayFireEffectTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T TakeDamage(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(PVEAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x43895C8))(this, pawn, damageInfo);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(PVEAITakeDamageComponent*, float))(Il2CppBase() + 0x4389FDC))(this, deltaTime);
	}
	template <typename T = void> T Destroy() {
		return ((T (*)(PVEAITakeDamageComponent*))(Il2CppBase() + 0x438A164))(this);
	}
	template <typename T = void> T PlayTakeDamageEffect(uintptr_t pawn, uintptr_t damageInfo) {
		return ((T (*)(PVEAITakeDamageComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x438A258))(this, pawn, damageInfo);
	}

};

}
