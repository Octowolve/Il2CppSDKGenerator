#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUSessionData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_SessionData"));
	}

	template <typename T = int64_t> static T& INVALID_SESSION_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _HAPISession() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _serverProcessID() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _initialized() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _pipeName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _sessionClassType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _isDefaultSession() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int64_t> T get_SessionID() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BB3200))(this);
	}
	template <typename T = void> T set_SessionID(int64_t value) {
		return ((T (*)(HEUSessionData*, int64_t))(Il2CppBase() + 0x2BED278))(this, value);
	}
	template <typename T = int32_t> T get_ProcessID() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDB90))(this);
	}
	template <typename T = void> T set_ProcessID(int32_t value) {
		return ((T (*)(HEUSessionData*, int32_t))(Il2CppBase() + 0x2BED288))(this, value);
	}
	template <typename T = uintptr_t> T get_SessionType() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDB98))(this);
	}
	template <typename T = void> T set_SessionType(uintptr_t value) {
		return ((T (*)(HEUSessionData*, uintptr_t))(Il2CppBase() + 0x2BEDBA0))(this, value);
	}
	template <typename T = bool> T get_IsInitialized() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDBA8))(this);
	}
	template <typename T = void> T set_IsInitialized(bool value) {
		return ((T (*)(HEUSessionData*, bool))(Il2CppBase() + 0x2BEDBB0))(this, value);
	}
	template <typename T = bool> T get_IsValidSessionID() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDBB8))(this);
	}
	template <typename T = Il2CppString*> T get_PipeName() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDBC0))(this);
	}
	template <typename T = void> T set_PipeName(Il2CppString* value) {
		return ((T (*)(HEUSessionData*, Il2CppString*))(Il2CppBase() + 0x2BEDC70))(this, value);
	}
	template <typename T = uintptr_t> T get_SessionClassType() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDC78))(this);
	}
	template <typename T = void> T set_SessionClassType(uintptr_t value) {
		return ((T (*)(HEUSessionData*, uintptr_t))(Il2CppBase() + 0x2BEDDC0))(this, value);
	}
	template <typename T = bool> T get_IsDefaultSession() {
		return ((T (*)(HEUSessionData*))(Il2CppBase() + 0x2BEDE00))(this);
	}
	template <typename T = void> T set_IsDefaultSession(bool value) {
		return ((T (*)(HEUSessionData*, bool))(Il2CppBase() + 0x2BEDE08))(this, value);
	}

};

}
