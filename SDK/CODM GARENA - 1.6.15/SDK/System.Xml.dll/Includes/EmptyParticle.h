#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EmptyParticle
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "", "EmptyParticle"));
	}


	template <typename T = uintptr_t> T GetOptimizedParticle(bool isTop) {
		return ((T (*)(EmptyParticle*, bool))(Il2CppBase() + 0x3792CD0))(this, isTop);
	}
	template <typename T = bool> T ParticleEquals(uintptr_t other) {
		return ((T (*)(EmptyParticle*, uintptr_t))(Il2CppBase() + 0x3792CD4))(this, other);
	}
	template <typename T = bool> T ValidateDerivationByRestriction(uintptr_t baseParticle, uintptr_t h, uintptr_t schema, bool raiseError) {
		return ((T (*)(EmptyParticle*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3792D08))(this, baseParticle, h, schema, raiseError);
	}
	template <typename T = void> T CheckRecursion(int32_t depth, uintptr_t h, uintptr_t schema) {
		return ((T (*)(EmptyParticle*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3792D10))(this, depth, h, schema);
	}
	template <typename T = void> T ValidateUniqueParticleAttribution(uintptr_t qnames, uintptr_t nsNames, uintptr_t h, uintptr_t schema) {
		return ((T (*)(EmptyParticle*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3792D14))(this, qnames, nsNames, h, schema);
	}
	template <typename T = void> T ValidateUniqueTypeAttribution(uintptr_t labels, uintptr_t h, uintptr_t schema) {
		return ((T (*)(EmptyParticle*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3792D18))(this, labels, h, schema);
	}

};

}
