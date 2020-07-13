#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonProperty
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonProperty"));
	}

	template <typename T = void*> T& _required() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _hasExplicitDefaultValue() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _defaultValue() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _hasGeneratedDefaultValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _propertyName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& _skipPropertyNameEscape() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _propertyType() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PropertyContract() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& DeclaringType() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = void*> T& Order() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& UnderlyingName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& ValueProvider() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& AttributeProvider() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& Converter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& MemberConverter() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& Ignored() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& Readable() {
		return *(T*)((uintptr_t)this + 0x4D);
	}
	template <typename T = bool> T& Writable() {
		return *(T*)((uintptr_t)this + 0x4E);
	}
	template <typename T = bool> T& HasMemberAttribute() {
		return *(T*)((uintptr_t)this + 0x4F);
	}
	template <typename T = void*> T& IsReference() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& NullValueHandling() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = void*> T& DefaultValueHandling() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = void*> T& ReferenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& ObjectCreationHandling() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& TypeNameHandling() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& ShouldSerialize() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& ShouldDeserialize() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& GetIsSpecified() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& SetIsSpecified() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ItemConverter() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& ItemIsReference() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& ItemTypeNameHandling() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& ItemReferenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = uintptr_t> T get_PropertyContract() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C3D8))(this);
	}
	template <typename T = void> T set_PropertyContract(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x398C3E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_PropertyName() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F43C))(this);
	}
	template <typename T = void> T set_PropertyName(Il2CppString* value) {
		return ((T (*)(JsonProperty*, Il2CppString*))(Il2CppBase() + 0x397F444))(this, value);
	}
	template <typename T = uintptr_t> T get_DeclaringType() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C3E8))(this);
	}
	template <typename T = void> T set_DeclaringType(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x398520C))(this, value);
	}
	template <typename T = void*> T get_Order() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x3986C14))(this);
	}
	template <typename T = void> T set_Order(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985CDC))(this, value);
	}
	template <typename T = Il2CppString*> T get_UnderlyingName() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C3F0))(this);
	}
	template <typename T = void> T set_UnderlyingName(Il2CppString* value) {
		return ((T (*)(JsonProperty*, Il2CppString*))(Il2CppBase() + 0x3985CD4))(this, value);
	}
	template <typename T = uintptr_t> T get_ValueProvider() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C3F8))(this);
	}
	template <typename T = void> T set_ValueProvider(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x3985214))(this, value);
	}
	template <typename T = void> T set_AttributeProvider(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x397E8FC))(this, value);
	}
	template <typename T = uintptr_t> T get_PropertyType() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397E014))(this);
	}
	template <typename T = void> T set_PropertyType(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x397E844))(this, value);
	}
	template <typename T = uintptr_t> T get_Converter() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F518))(this);
	}
	template <typename T = void> T set_Converter(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x397F520))(this, value);
	}
	template <typename T = uintptr_t> T get_MemberConverter() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F528))(this);
	}
	template <typename T = void> T set_MemberConverter(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x397F530))(this, value);
	}
	template <typename T = bool> T get_Ignored() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C400))(this);
	}
	template <typename T = void> T set_Ignored(bool value) {
		return ((T (*)(JsonProperty*, bool))(Il2CppBase() + 0x3985CF0))(this, value);
	}
	template <typename T = bool> T get_Readable() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C408))(this);
	}
	template <typename T = void> T set_Readable(bool value) {
		return ((T (*)(JsonProperty*, bool))(Il2CppBase() + 0x397F42C))(this, value);
	}
	template <typename T = bool> T get_Writable() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C410))(this);
	}
	template <typename T = void> T set_Writable(bool value) {
		return ((T (*)(JsonProperty*, bool))(Il2CppBase() + 0x397F434))(this, value);
	}
	template <typename T = bool> T get_HasMemberAttribute() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398521C))(this);
	}
	template <typename T = void> T set_HasMemberAttribute(bool value) {
		return ((T (*)(JsonProperty*, bool))(Il2CppBase() + 0x3985CE8))(this, value);
	}
	template <typename T = uintptr_t> T get_DefaultValue() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F538))(this);
	}
	template <typename T = void> T set_DefaultValue(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x397F550))(this, value);
	}
	template <typename T = uintptr_t> T GetResolvedDefaultValue() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C418))(this);
	}
	template <typename T = uintptr_t> T get_Required() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398BE6C))(this);
	}
	template <typename T = void*> T get_IsReference() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F560))(this);
	}
	template <typename T = void> T set_IsReference(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x397F568))(this, value);
	}
	template <typename T = void*> T get_NullValueHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F570))(this);
	}
	template <typename T = void> T set_NullValueHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x397F584))(this, value);
	}
	template <typename T = void*> T get_DefaultValueHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F590))(this);
	}
	template <typename T = void> T set_DefaultValueHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x397F5A4))(this, value);
	}
	template <typename T = void*> T get_ReferenceLoopHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F5B0))(this);
	}
	template <typename T = void> T set_ReferenceLoopHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x397F5C4))(this, value);
	}
	template <typename T = void*> T get_ObjectCreationHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F5D0))(this);
	}
	template <typename T = void> T set_ObjectCreationHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x397F5E4))(this, value);
	}
	template <typename T = void*> T get_TypeNameHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x397F5F0))(this);
	}
	template <typename T = void> T set_TypeNameHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x397F604))(this, value);
	}
	template <typename T = void*> T get_ShouldSerialize() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C4F8))(this);
	}
	template <typename T = void> T set_ShouldSerialize(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985540))(this, value);
	}
	template <typename T = void*> T get_ShouldDeserialize() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C500))(this);
	}
	template <typename T = void*> T get_GetIsSpecified() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C508))(this);
	}
	template <typename T = void> T set_GetIsSpecified(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985E4C))(this, value);
	}
	template <typename T = void*> T get_SetIsSpecified() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C510))(this);
	}
	template <typename T = void> T set_SetIsSpecified(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985E54))(this, value);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C518))(this);
	}
	template <typename T = uintptr_t> T get_ItemConverter() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C520))(this);
	}
	template <typename T = void> T set_ItemConverter(uintptr_t value) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x3985E1C))(this, value);
	}
	template <typename T = void*> T get_ItemIsReference() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C528))(this);
	}
	template <typename T = void> T set_ItemIsReference(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985CF8))(this, value);
	}
	template <typename T = void*> T get_ItemTypeNameHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C530))(this);
	}
	template <typename T = void> T set_ItemTypeNameHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985E30))(this, value);
	}
	template <typename T = void*> T get_ItemReferenceLoopHandling() {
		return ((T (*)(JsonProperty*))(Il2CppBase() + 0x398C544))(this);
	}
	template <typename T = void> T set_ItemReferenceLoopHandling(void* value) {
		return ((T (*)(JsonProperty*, void*))(Il2CppBase() + 0x3985E24))(this, value);
	}
	template <typename T = void> T WritePropertyName(uintptr_t writer) {
		return ((T (*)(JsonProperty*, uintptr_t))(Il2CppBase() + 0x398C558))(this, writer);
	}

};

}
