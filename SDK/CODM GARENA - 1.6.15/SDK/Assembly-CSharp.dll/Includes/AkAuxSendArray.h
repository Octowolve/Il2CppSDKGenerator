#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAuxSendArray
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAuxSendArray"));
	}

	template <typename T = int32_t> static T& MAX_COUNT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& SIZE_OF_AKAUXSENDVALUE() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_Buffer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_Count() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T get_Item(int32_t index) {
		return ((T (*)(AkAuxSendArray*, int32_t))(Il2CppBase() + 0x4A2824C))(this, index);
	}
	template <typename T = bool> T get_isFull() {
		return ((T (*)(AkAuxSendArray*))(Il2CppBase() + 0x4A283F4))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkAuxSendArray*))(Il2CppBase() + 0x4A28498))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkAuxSendArray*))(Il2CppBase() + 0x4A285A8))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AkAuxSendArray*))(Il2CppBase() + 0x4A2860C))(this);
	}
	template <typename T = bool> T Add(uintptr_t in_listenerGameObj, uint32_t in_AuxBusID, float in_fValue) {
		return ((T (*)(AkAuxSendArray*, uintptr_t, uint32_t, float))(Il2CppBase() + 0x4A28618))(this, in_listenerGameObj, in_AuxBusID, in_fValue);
	}
	template <typename T = bool> T Add_1(uint32_t in_AuxBusID, float in_fValue) {
		return ((T (*)(AkAuxSendArray*, uint32_t, float))(Il2CppBase() + 0x4A287AC))(this, in_AuxBusID, in_fValue);
	}
	template <typename T = bool> T Contains(uintptr_t in_listenerGameObj, uint32_t in_AuxBusID) {
		return ((T (*)(AkAuxSendArray*, uintptr_t, uint32_t))(Il2CppBase() + 0x4A288E0))(this, in_listenerGameObj, in_AuxBusID);
	}
	template <typename T = bool> T Contains_1(uint32_t in_AuxBusID) {
		return ((T (*)(AkAuxSendArray*, uint32_t))(Il2CppBase() + 0x4A28AAC))(this, in_AuxBusID);
	}
	template <typename T = uintptr_t> T SetValues(uintptr_t gameObject) {
		return ((T (*)(AkAuxSendArray*, uintptr_t))(Il2CppBase() + 0x4A28C14))(this, gameObject);
	}
	template <typename T = uintptr_t> T GetValues(uintptr_t gameObject) {
		return ((T (*)(AkAuxSendArray*, uintptr_t))(Il2CppBase() + 0x4A28D2C))(this, gameObject);
	}
	template <typename T = uintptr_t> T GetBuffer() {
		return ((T (*)(AkAuxSendArray*))(Il2CppBase() + 0x4A28E54))(this);
	}
	template <typename T = int32_t> T Count() {
		return ((T (*)(AkAuxSendArray*))(Il2CppBase() + 0x4A28E5C))(this);
	}
	template <typename T = uintptr_t> T GetObjectPtr(int32_t index) {
		return ((T (*)(AkAuxSendArray*, int32_t))(Il2CppBase() + 0x4A28380))(this, index);
	}

};

}
