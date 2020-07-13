#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HumanBone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HumanBone"));
	}

	template <typename T = Il2CppString*> T& m_BoneName() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& m_HumanName() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& limit() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = Il2CppString*> T get_boneName() {
		return ((T (*)(HumanBone*))(Il2CppBase() + 0x47A1ED4))(this);
	}
	template <typename T = void> T set_boneName(Il2CppString* value) {
		return ((T (*)(HumanBone*, Il2CppString*))(Il2CppBase() + 0x47A1EDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_humanName() {
		return ((T (*)(HumanBone*))(Il2CppBase() + 0x47A1EE4))(this);
	}
	template <typename T = void> T set_humanName(Il2CppString* value) {
		return ((T (*)(HumanBone*, Il2CppString*))(Il2CppBase() + 0x47A1EEC))(this, value);
	}

};

}
