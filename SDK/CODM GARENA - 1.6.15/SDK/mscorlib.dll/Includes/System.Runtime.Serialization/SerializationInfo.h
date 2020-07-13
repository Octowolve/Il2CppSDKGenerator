#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class SerializationInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "SerializationInfo"));
	}

	template <typename T = uintptr_t> T& serialized() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& values() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& assemblyName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& fullTypeName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& converter() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_AssemblyName() {
		return ((T (*)(SerializationInfo*))(Il2CppBase() + 0x302C0A0))(this);
	}
	template <typename T = Il2CppString*> T get_FullTypeName() {
		return ((T (*)(SerializationInfo*))(Il2CppBase() + 0x302C0A8))(this);
	}
	template <typename T = int32_t> T get_MemberCount() {
		return ((T (*)(SerializationInfo*))(Il2CppBase() + 0x302BE9C))(this);
	}
	template <typename T = void> T AddValue(Il2CppString* name, uintptr_t value, uintptr_t type) {
		return ((T (*)(SerializationInfo*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3028288))(this, name, value, type);
	}
	template <typename T = uintptr_t> T GetValue(Il2CppString* name, uintptr_t type) {
		return ((T (*)(SerializationInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3030C98))(this, name, type);
	}
	template <typename T = void> T SetType(uintptr_t type) {
		return ((T (*)(SerializationInfo*, uintptr_t))(Il2CppBase() + 0x3030F84))(this, type);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(SerializationInfo*))(Il2CppBase() + 0x302BED0))(this);
	}
	template <typename T = void> T AddValue_1(Il2CppString* name, int16_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, int16_t))(Il2CppBase() + 0x30310DC))(this, name, value);
	}
	template <typename T = void> T AddValue_2(Il2CppString* name, int32_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, int32_t))(Il2CppBase() + 0x30311E0))(this, name, value);
	}
	template <typename T = void> T AddValue_3(Il2CppString* name, bool value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, bool))(Il2CppBase() + 0x30312E4))(this, name, value);
	}
	template <typename T = void> T AddValue_4(Il2CppString* name, uintptr_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x30313E8))(this, name, value);
	}
	template <typename T = void> T AddValue_5(Il2CppString* name, float value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, float))(Il2CppBase() + 0x3031510))(this, name, value);
	}
	template <typename T = void> T AddValue_6(Il2CppString* name, uint32_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, uint32_t))(Il2CppBase() + 0x303161C))(this, name, value);
	}
	template <typename T = void> T AddValue_7(Il2CppString* name, int64_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, int64_t))(Il2CppBase() + 0x3031720))(this, name, value);
	}
	template <typename T = void> T AddValue_8(Il2CppString* name, uint64_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, uint64_t))(Il2CppBase() + 0x303182C))(this, name, value);
	}
	template <typename T = void> T AddValue_9(Il2CppString* name, uintptr_t value) {
		return ((T (*)(SerializationInfo*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3031938))(this, name, value);
	}
	template <typename T = bool> T GetBoolean(Il2CppString* name) {
		return ((T (*)(SerializationInfo*, Il2CppString*))(Il2CppBase() + 0x3031A44))(this, name);
	}
	template <typename T = int16_t> T GetInt16(Il2CppString* name) {
		return ((T (*)(SerializationInfo*, Il2CppString*))(Il2CppBase() + 0x3031BB4))(this, name);
	}
	template <typename T = int32_t> T GetInt32(Il2CppString* name) {
		return ((T (*)(SerializationInfo*, Il2CppString*))(Il2CppBase() + 0x3031D24))(this, name);
	}
	template <typename T = int64_t> T GetInt64(Il2CppString* name) {
		return ((T (*)(SerializationInfo*, Il2CppString*))(Il2CppBase() + 0x3031E94))(this, name);
	}
	template <typename T = Il2CppString*> T GetString(Il2CppString* name) {
		return ((T (*)(SerializationInfo*, Il2CppString*))(Il2CppBase() + 0x3032004))(this, name);
	}
	template <typename T = uint32_t> T GetUInt32(Il2CppString* name) {
		return ((T (*)(SerializationInfo*, Il2CppString*))(Il2CppBase() + 0x3032184))(this, name);
	}

};

}
