#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class WebHeaderCollection
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "WebHeaderCollection"));
	}

	template <typename T = uintptr_t> static T& restricted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& multiValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, bool>*> static T& restricted_response() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = bool> T& internallyCreated() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& allowed_chars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebHeaderCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E73198))(this, serializationInfo, streamingContext);
	}
	template <typename T = void> T Add(Il2CppString* header) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*))(Il2CppBase() + 0x3E680C8))(this, header);
	}
	template <typename T = void> T Add_1(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E731C0))(this, name, value);
	}
	template <typename T = void> T AddWithoutValidate(Il2CppString* headerName, Il2CppString* headerValue) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E73598))(this, headerName, headerValue);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValues(Il2CppString* header) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*))(Il2CppBase() + 0x3E73A68))(this, header);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetValues_1(int32_t index) {
		return ((T (*)(WebHeaderCollection*, int32_t))(Il2CppBase() + 0x3E73B54))(this, index);
	}
	template <typename T = bool> static T IsRestricted(Il2CppString* headerName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E73328))(0, headerName);
	}
	template <typename T = void> T OnDeserialization(uintptr_t sender) {
		return ((T (*)(WebHeaderCollection*, uintptr_t))(Il2CppBase() + 0x3E73B84))(this, sender);
	}
	template <typename T = void> T Remove(Il2CppString* name) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*))(Il2CppBase() + 0x3E73B88))(this, name);
	}
	template <typename T = void> T Set(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E73CEC))(this, name, value);
	}
	template <typename T = Il2CppString*> T ToStringMultiValue() {
		return ((T (*)(WebHeaderCollection*))(Il2CppBase() + 0x3E73FA4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(WebHeaderCollection*))(Il2CppBase() + 0x3E74414))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t serializationInfo, uintptr_t streamingContext) {
		return ((T (*)(WebHeaderCollection*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E745D8))(this, serializationInfo, streamingContext);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(WebHeaderCollection*))(Il2CppBase() + 0x3E7474C))(this);
	}
	template <typename T = uintptr_t> T get_Keys() {
		return ((T (*)(WebHeaderCollection*))(Il2CppBase() + 0x3E74754))(this);
	}
	template <typename T = Il2CppString*> T Get(int32_t index) {
		return ((T (*)(WebHeaderCollection*, int32_t))(Il2CppBase() + 0x3E7475C))(this, index);
	}
	template <typename T = Il2CppString*> T Get_1(Il2CppString* name) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*))(Il2CppBase() + 0x3E74764))(this, name);
	}
	template <typename T = Il2CppString*> T GetKey(int32_t index) {
		return ((T (*)(WebHeaderCollection*, int32_t))(Il2CppBase() + 0x3E7476C))(this, index);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(WebHeaderCollection*))(Il2CppBase() + 0x3E74774))(this);
	}
	template <typename T = void> T SetInternal(Il2CppString* header) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*))(Il2CppBase() + 0x3E6A938))(this, header);
	}
	template <typename T = void> T SetInternal_1(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E7477C))(this, name, value);
	}
	template <typename T = void> T RemoveAndAdd(Il2CppString* name, Il2CppString* value) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3E74968))(this, name, value);
	}
	template <typename T = void> T RemoveInternal(Il2CppString* name) {
		return ((T (*)(WebHeaderCollection*, Il2CppString*))(Il2CppBase() + 0x3E654D4))(this, name);
	}
	template <typename T = bool> static T IsMultiValue(Il2CppString* headerName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E742B4))(0, headerName);
	}
	template <typename T = bool> static T IsHeaderValue(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E739B0))(0, value);
	}
	template <typename T = bool> static T IsHeaderName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3E73840))(0, name);
	}

};

}
