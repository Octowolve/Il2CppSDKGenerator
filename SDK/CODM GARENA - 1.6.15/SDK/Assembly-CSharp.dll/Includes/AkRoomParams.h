#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkRoomParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkRoomParams"));
	}

	template <typename T = uintptr_t> T& swigCPtr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& swigCMemOwn() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> static T getCPtr(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x491F180))(0, obj);
	}
	template <typename T = void> T setCPtr(uintptr_t cPtr) {
		return ((T (*)(AkRoomParams*, uintptr_t))(Il2CppBase() + 0x491F214))(this, cPtr);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F240))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F2A8))(this);
	}
	template <typename T = void> T set_Up(uintptr_t value) {
		return ((T (*)(AkRoomParams*, uintptr_t))(Il2CppBase() + 0x491F430))(this, value);
	}
	template <typename T = uintptr_t> T get_Up() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491D854))(this);
	}
	template <typename T = void> T set_Front(uintptr_t value) {
		return ((T (*)(AkRoomParams*, uintptr_t))(Il2CppBase() + 0x491F4F8))(this, value);
	}
	template <typename T = uintptr_t> T get_Front() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491D97C))(this);
	}
	template <typename T = void> T set_ReverbAuxBus(uint32_t value) {
		return ((T (*)(AkRoomParams*, uint32_t))(Il2CppBase() + 0x491DAA4))(this, value);
	}
	template <typename T = uint32_t> T get_ReverbAuxBus() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F5C0))(this);
	}
	template <typename T = void> T set_ReverbLevel(float value) {
		return ((T (*)(AkRoomParams*, float))(Il2CppBase() + 0x491DB58))(this, value);
	}
	template <typename T = float> T get_ReverbLevel() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F66C))(this);
	}
	template <typename T = void> T set_WallOcclusion(float value) {
		return ((T (*)(AkRoomParams*, float))(Il2CppBase() + 0x491DC0C))(this, value);
	}
	template <typename T = float> T get_WallOcclusion() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F718))(this);
	}
	template <typename T = void> T set_Priority(int32_t value) {
		return ((T (*)(AkRoomParams*, int32_t))(Il2CppBase() + 0x491F7C4))(this, value);
	}
	template <typename T = int32_t> T get_Priority() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F878))(this);
	}
	template <typename T = void> T set_RoomGameObj_AuxSendLevelToSelf(float value) {
		return ((T (*)(AkRoomParams*, float))(Il2CppBase() + 0x491F924))(this, value);
	}
	template <typename T = float> T get_RoomGameObj_AuxSendLevelToSelf() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491F9D8))(this);
	}
	template <typename T = void> T set_RoomGameObj_KeepRegistered(bool value) {
		return ((T (*)(AkRoomParams*, bool))(Il2CppBase() + 0x491FA84))(this, value);
	}
	template <typename T = bool> T get_RoomGameObj_KeepRegistered() {
		return ((T (*)(AkRoomParams*))(Il2CppBase() + 0x491FB38))(this);
	}

};

}
