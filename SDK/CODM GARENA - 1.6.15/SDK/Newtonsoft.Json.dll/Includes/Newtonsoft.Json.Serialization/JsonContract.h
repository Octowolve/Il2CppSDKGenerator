#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonContract"));
	}

	template <typename T = bool> T& IsNullable() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsConvertable() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& IsEnum() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = uintptr_t> T& NonNullableUnderlyingType() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& InternalReadType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ContractType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IsReadOnlyOrFixedSize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& IsSealed() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& IsInstantiable() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _onDeserializedCallbacks() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = void*> T& _onDeserializingCallbacks() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = void*> T& _onSerializedCallbacks() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = void*> T& _onSerializingCallbacks() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = void*> T& _onErrorCallbacks() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _createdType() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& UnderlyingType() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = void*> T& IsReference() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Converter() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& InternalConverter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& DefaultCreator() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& DefaultCreatorNonPublic() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = uintptr_t> T get_UnderlyingType() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3982314))(this);
	}
	template <typename T = void> T set_UnderlyingType(uintptr_t value) {
		return ((T (*)(JsonContract*, uintptr_t))(Il2CppBase() + 0x3989768))(this, value);
	}
	template <typename T = uintptr_t> T get_CreatedType() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x397F970))(this);
	}
	template <typename T = void> T set_CreatedType(uintptr_t value) {
		return ((T (*)(JsonContract*, uintptr_t))(Il2CppBase() + 0x3988CB0))(this, value);
	}
	template <typename T = void*> T get_IsReference() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3989770))(this);
	}
	template <typename T = void> T set_IsReference(void* value) {
		return ((T (*)(JsonContract*, void*))(Il2CppBase() + 0x397F958))(this, value);
	}
	template <typename T = uintptr_t> T get_Converter() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3989778))(this);
	}
	template <typename T = void> T set_Converter(uintptr_t value) {
		return ((T (*)(JsonContract*, uintptr_t))(Il2CppBase() + 0x397F960))(this, value);
	}
	template <typename T = uintptr_t> T get_InternalConverter() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3989780))(this);
	}
	template <typename T = void> T set_InternalConverter(uintptr_t value) {
		return ((T (*)(JsonContract*, uintptr_t))(Il2CppBase() + 0x397F968))(this, value);
	}
	template <typename T = void*> T get_OnDeserializedCallbacks() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3980860))(this);
	}
	template <typename T = void*> T get_OnDeserializingCallbacks() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x39807B0))(this);
	}
	template <typename T = void*> T get_OnSerializedCallbacks() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3980700))(this);
	}
	template <typename T = void*> T get_OnSerializingCallbacks() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3980650))(this);
	}
	template <typename T = void*> T get_OnErrorCallbacks() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x3980910))(this);
	}
	template <typename T = void*> T get_DefaultCreator() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x397C9D4))(this);
	}
	template <typename T = void> T set_DefaultCreator(void* value) {
		return ((T (*)(JsonContract*, void*))(Il2CppBase() + 0x397C9CC))(this, value);
	}
	template <typename T = bool> T get_DefaultCreatorNonPublic() {
		return ((T (*)(JsonContract*))(Il2CppBase() + 0x397C9DC))(this);
	}
	template <typename T = void> T set_DefaultCreatorNonPublic(bool value) {
		return ((T (*)(JsonContract*, bool))(Il2CppBase() + 0x397F978))(this, value);
	}
	template <typename T = void> T InvokeOnSerializing(uintptr_t o, uintptr_t context) {
		return ((T (*)(JsonContract*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3989788))(this, o, context);
	}
	template <typename T = void> T InvokeOnSerialized(uintptr_t o, uintptr_t context) {
		return ((T (*)(JsonContract*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3989B78))(this, o, context);
	}
	template <typename T = void> T InvokeOnDeserializing(uintptr_t o, uintptr_t context) {
		return ((T (*)(JsonContract*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3989E8C))(this, o, context);
	}
	template <typename T = void> T InvokeOnDeserialized(uintptr_t o, uintptr_t context) {
		return ((T (*)(JsonContract*, uintptr_t, uintptr_t))(Il2CppBase() + 0x398A1A0))(this, o, context);
	}
	template <typename T = void> T InvokeOnError(uintptr_t o, uintptr_t context, uintptr_t errorContext) {
		return ((T (*)(JsonContract*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x398A340))(this, o, context, errorContext);
	}
	template <typename T = uintptr_t> static T CreateSerializationCallback(uintptr_t callbackMethodInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x398134C))(0, callbackMethodInfo);
	}
	template <typename T = uintptr_t> static T CreateSerializationErrorCallback(uintptr_t callbackMethodInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3981430))(0, callbackMethodInfo);
	}

};

}
