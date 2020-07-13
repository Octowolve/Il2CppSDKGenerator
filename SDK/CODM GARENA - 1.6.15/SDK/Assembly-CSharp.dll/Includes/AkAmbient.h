#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAmbient
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAmbient"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> static T& multiPosEventTree() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& multiPositionArray() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& MultiPositionType() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& multiPositionTypeLabel() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ParentAkAmbience() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T get_ParentAkAmbience() {
		return ((T (*)(AkAmbient*))(Il2CppBase() + 0x4A204C0))(this);
	}
	template <typename T = void> T set_ParentAkAmbience(uintptr_t value) {
		return ((T (*)(AkAmbient*, uintptr_t))(Il2CppBase() + 0x4A204C8))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AkAmbient*))(Il2CppBase() + 0x4A204D0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AkAmbient*))(Il2CppBase() + 0x4A20E90))(this);
	}
	template <typename T = void> T HandleEvent(uintptr_t in_gameObject) {
		return ((T (*)(AkAmbient*, uintptr_t))(Il2CppBase() + 0x4A2113C))(this, in_gameObject);
	}
	template <typename T = void> T OnDrawGizmosSelected() {
		return ((T (*)(AkAmbient*))(Il2CppBase() + 0x4A2146C))(this);
	}
	template <typename T = uintptr_t> T BuildMultiDirectionArray(uintptr_t eventPosList) {
		return ((T (*)(AkAmbient*, uintptr_t))(Il2CppBase() + 0x4A20C24))(this, eventPosList);
	}
	template <typename T = uintptr_t> T BuildAkPositionArray() {
		return ((T (*)(AkAmbient*))(Il2CppBase() + 0x4A209F0))(this);
	}

};

}
