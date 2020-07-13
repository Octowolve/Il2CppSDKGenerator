#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class WakeUpParameters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "WakeUpParameters"));
	}

	template <typename T = uint32_t> T& roomID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& roomAddress() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& password() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& modeID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& roomType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& playlistID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> static T& Parameterslength() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IsParametersValid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& EnterRoomSource() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint32_t> T get_roomID() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x3846754))(this);
	}
	template <typename T = void> T set_roomID(uint32_t value) {
		return ((T (*)(WakeUpParameters*, uint32_t))(Il2CppBase() + 0x38809DC))(this, value);
	}
	template <typename T = uint32_t> T get_roomAddress() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x384675C))(this);
	}
	template <typename T = void> T set_roomAddress(uint32_t value) {
		return ((T (*)(WakeUpParameters*, uint32_t))(Il2CppBase() + 0x38809E4))(this, value);
	}
	template <typename T = Il2CppString*> T get_password() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x3846764))(this);
	}
	template <typename T = void> T set_password(Il2CppString* value) {
		return ((T (*)(WakeUpParameters*, Il2CppString*))(Il2CppBase() + 0x38809EC))(this, value);
	}
	template <typename T = uint32_t> T get_modeID() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x384673C))(this);
	}
	template <typename T = void> T set_modeID(uint32_t value) {
		return ((T (*)(WakeUpParameters*, uint32_t))(Il2CppBase() + 0x38809F4))(this, value);
	}
	template <typename T = uint32_t> T get_roomType() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x3846744))(this);
	}
	template <typename T = void> T set_roomType(uint32_t value) {
		return ((T (*)(WakeUpParameters*, uint32_t))(Il2CppBase() + 0x38809FC))(this, value);
	}
	template <typename T = int32_t> T get_playlistID() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x384674C))(this);
	}
	template <typename T = void> T set_playlistID(int32_t value) {
		return ((T (*)(WakeUpParameters*, int32_t))(Il2CppBase() + 0x3880A04))(this, value);
	}
	template <typename T = bool> T get_IsParametersValid() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x3846728))(this);
	}
	template <typename T = void> T set_IsParametersValid(bool value) {
		return ((T (*)(WakeUpParameters*, bool))(Il2CppBase() + 0x3846554))(this, value);
	}
	template <typename T = uintptr_t> static T CreateWakeUpParameters() {
		return ((T (*)(void *))(Il2CppBase() + 0x3845824))(0);
	}
	template <typename T = void> T Copy(uintptr_t wakeUpParameters) {
		return ((T (*)(WakeUpParameters*, uintptr_t))(Il2CppBase() + 0x3880A0C))(this, wakeUpParameters);
	}
	template <typename T = void> T CopyFromPathParameters(uintptr_t pathParameters) {
		return ((T (*)(WakeUpParameters*, uintptr_t))(Il2CppBase() + 0x3846078))(this, pathParameters);
	}
	template <typename T = bool> T Parse(Il2CppString* param) {
		return ((T (*)(WakeUpParameters*, Il2CppString*))(Il2CppBase() + 0x38462A8))(this, param);
	}
	template <typename T = Il2CppString*> T GetGameCenterData() {
		return ((T (*)(WakeUpParameters*))(Il2CppBase() + 0x384C068))(this);
	}

};

}
