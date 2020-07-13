#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkAuxSendValue
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkAuxSendValue"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4A28E64))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkAuxSendValue*, uintptr_t))(Il2CppBase() + 0x4A28EF8))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkAuxSendValue*))(Il2CppBase() + 0x4A28F24))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkAuxSendValue*))(Il2CppBase() + 0x4A28F8C))(this);
	}
	template <typename T = void> T set_listenerID(uint64_t value) {
		return ((T (*)(AkAuxSendValue*, uint64_t))(Il2CppBase() + 0x4A29114))(this, value);
	}
	template <typename T = uint64_t> T get_listenerID() {
		return ((T (*)(AkAuxSendValue*))(Il2CppBase() + 0x4A291DC))(this);
	}
	template <typename T = void> T set_auxBusID(uint32_t value) {
		return ((T (*)(AkAuxSendValue*, uint32_t))(Il2CppBase() + 0x4A29288))(this, value);
	}
	template <typename T = uint32_t> T get_auxBusID() {
		return ((T (*)(AkAuxSendValue*))(Il2CppBase() + 0x4A2933C))(this);
	}
	template <typename T = void> T set_fControlValue(float value) {
		return ((T (*)(AkAuxSendValue*, float))(Il2CppBase() + 0x4A293E8))(this, value);
	}
	template <typename T = float> T get_fControlValue() {
		return ((T (*)(AkAuxSendValue*))(Il2CppBase() + 0x4A2949C))(this);
	}
	template <typename T = void> T Set(uintptr_t listener, uint32_t id, float value) {
		return ((T (*)(AkAuxSendValue*, uintptr_t, uint32_t, float))(Il2CppBase() + 0x4A29548))(this, listener, id, value);
	}
	template <typename T = bool> T IsSame(uintptr_t listener, uint32_t id) {
		return ((T (*)(AkAuxSendValue*, uintptr_t, uint32_t))(Il2CppBase() + 0x4A29698))(this, listener, id);
	}
	template <typename T = int32_t> static T GetSizeOf() {
		return ((T (*)(void *))(Il2CppBase() + 0x4A297C8))(0);
	}
	template <typename T = uintptr_t> T SetGameObjectAuxSendValues(uintptr_t in_gameObjectID, uint32_t in_uNumSendValues) {
		return ((T (*)(AkAuxSendValue*, uintptr_t, uint32_t))(Il2CppBase() + 0x4A29868))(this, in_gameObjectID, in_uNumSendValues);
	}
	template <typename T = uintptr_t> T GetGameObjectAuxSendValues(uintptr_t in_gameObjectID, uintptr_t io_ruNumSendValues) {
		return ((T (*)(AkAuxSendValue*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A29998))(this, in_gameObjectID, io_ruNumSendValues);
	}

};

}
