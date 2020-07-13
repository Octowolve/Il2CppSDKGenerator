#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class BitStream
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "BitStream"));
	}


	template <typename T = void> T Serializeb(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E534))(this, value);
	}
	template <typename T = void> T Serializec(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E5D4))(this, value);
	}
	template <typename T = void> T Serializei(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E674))(this, value);
	}
	template <typename T = void> T Serializef(uintptr_t value, float maximumDelta) {
		return ((T (*)(BitStream*, uintptr_t, float))(Il2CppBase() + 0x469E714))(this, value, maximumDelta);
	}
	template <typename T = void> T Serializeq(uintptr_t value, float maximumDelta) {
		return ((T (*)(BitStream*, uintptr_t, float))(Il2CppBase() + 0x469E7BC))(this, value, maximumDelta);
	}
	template <typename T = void> static T INTERNAL_CALL_Serializeq(uintptr_t self, uintptr_t value, float maximumDelta) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x469E7E0))(0, self, value, maximumDelta);
	}
	template <typename T = void> T Serializev(uintptr_t value, float maximumDelta) {
		return ((T (*)(BitStream*, uintptr_t, float))(Il2CppBase() + 0x469E888))(this, value, maximumDelta);
	}
	template <typename T = void> static T INTERNAL_CALL_Serializev(uintptr_t self, uintptr_t value, float maximumDelta) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float))(Il2CppBase() + 0x469E8AC))(0, self, value, maximumDelta);
	}
	template <typename T = void> T Serialize(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E954))(this, value);
	}
	template <typename T = void> T Serialize_1(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E994))(this, value);
	}
	template <typename T = void> T Serialize_2(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E998))(this, value);
	}
	template <typename T = void> T Serialize_3(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E99C))(this, value);
	}
	template <typename T = void> T Serialize_4(uintptr_t value, float maxDelta) {
		return ((T (*)(BitStream*, uintptr_t, float))(Il2CppBase() + 0x469E9A8))(this, value, maxDelta);
	}
	template <typename T = void> T Serialize_5(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E9AC))(this, value);
	}
	template <typename T = void> T Serialize_6(uintptr_t value, float maxDelta) {
		return ((T (*)(BitStream*, uintptr_t, float))(Il2CppBase() + 0x469E9D4))(this, value, maxDelta);
	}
	template <typename T = void> T Serialize_7(uintptr_t value) {
		return ((T (*)(BitStream*, uintptr_t))(Il2CppBase() + 0x469E9F8))(this, value);
	}
	template <typename T = void> T Serialize_8(uintptr_t value, float maxDelta) {
		return ((T (*)(BitStream*, uintptr_t, float))(Il2CppBase() + 0x469EA20))(this, value, maxDelta);
	}
	template <typename T = bool> T get_isWriting() {
		return ((T (*)(BitStream*))(Il2CppBase() + 0x469EA44))(this);
	}

};

}
