#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ProtobufConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ProtobufConfig"));
	}

	template <typename T = int32_t> T& SendCmd() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& SendClass() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RecvCmd() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& RecvClass() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& NeedResend() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& CanSendWhenDisconnect() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = bool> T& ShowModel() {
		return *(T*)((uintptr_t)this + 0x1E);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_SendCmd() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C24))(this);
	}
	template <typename T = void> T set_SendCmd(int32_t value) {
		return ((T (*)(ProtobufConfig*, int32_t))(Il2CppBase() + 0x3784C2C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SendClass() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C34))(this);
	}
	template <typename T = void> T set_SendClass(Il2CppString* value) {
		return ((T (*)(ProtobufConfig*, Il2CppString*))(Il2CppBase() + 0x3784C3C))(this, value);
	}
	template <typename T = int32_t> T get_RecvCmd() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C44))(this);
	}
	template <typename T = void> T set_RecvCmd(int32_t value) {
		return ((T (*)(ProtobufConfig*, int32_t))(Il2CppBase() + 0x3784C4C))(this, value);
	}
	template <typename T = Il2CppString*> T get_RecvClass() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C54))(this);
	}
	template <typename T = void> T set_RecvClass(Il2CppString* value) {
		return ((T (*)(ProtobufConfig*, Il2CppString*))(Il2CppBase() + 0x3784C5C))(this, value);
	}
	template <typename T = bool> T get_NeedResend() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C64))(this);
	}
	template <typename T = void> T set_NeedResend(bool value) {
		return ((T (*)(ProtobufConfig*, bool))(Il2CppBase() + 0x3784C6C))(this, value);
	}
	template <typename T = bool> T get_CanSendWhenDisconnect() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C74))(this);
	}
	template <typename T = void> T set_CanSendWhenDisconnect(bool value) {
		return ((T (*)(ProtobufConfig*, bool))(Il2CppBase() + 0x3784C7C))(this, value);
	}
	template <typename T = bool> T get_ShowModel() {
		return ((T (*)(ProtobufConfig*))(Il2CppBase() + 0x3784C84))(this);
	}
	template <typename T = void> T set_ShowModel(bool value) {
		return ((T (*)(ProtobufConfig*, bool))(Il2CppBase() + 0x3784C8C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(ProtobufConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3784C94))(this, bytes, position);
	}

};

}
