#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkMIDIPostArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkMIDIPostArray"));
	}

	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& SIZE_OF() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_Buffer() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(AkMIDIPostArray*, int32_t))(Il2CppBase() + 0x490EB78))(this, index);
	}
	template <typename T = void> T set_Item(int32_t index, uintptr_t value) {
		return ((T (*)(AkMIDIPostArray*, int32_t, uintptr_t))(Il2CppBase() + 0x490ECF4))(this, index, value);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkMIDIPostArray*))(Il2CppBase() + 0x490EEBC))(this);
	}
	template <typename T = void> T PostOnEvent(uint32_t in_eventID, uintptr_t gameObject) {
		return ((T (*)(AkMIDIPostArray*, uint32_t, uintptr_t))(Il2CppBase() + 0x490EFE0))(this, in_eventID, gameObject);
	}
	template <typename T = void> T PostOnEvent_1(uint32_t in_eventID, uintptr_t gameObject, int32_t count) {
		return ((T (*)(AkMIDIPostArray*, uint32_t, uintptr_t, int32_t))(Il2CppBase() + 0x490F114))(this, in_eventID, gameObject, count);
	}
	template <typename T = uintptr_t> T GetBuffer() {
		return ((T (*)(AkMIDIPostArray*))(Il2CppBase() + 0x490F2A0))(this);
	}
	template <typename T = int32_t> T Count() {
		return ((T (*)(AkMIDIPostArray*))(Il2CppBase() + 0x490F2A8))(this);
	}
	template <typename T = uintptr_t> T GetObjectPtr(int32_t index) {
		return ((T (*)(AkMIDIPostArray*, int32_t))(Il2CppBase() + 0x490ECA8))(this, index);
	}

};

}
