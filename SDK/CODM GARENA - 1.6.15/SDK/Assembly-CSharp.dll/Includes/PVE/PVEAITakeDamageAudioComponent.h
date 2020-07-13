#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEAITakeDamageAudioComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEAITakeDamageAudioComponent"));
	}

	template <typename T = Il2CppString*> T& hitByMeleeSound_1P() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& hitByGunSound_1P() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& hitByMeleeSound_3P() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& hitByGunSound_3P() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
