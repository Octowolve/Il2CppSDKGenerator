#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Utilities {

class ReflectionUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Utilities", "ReflectionUtils"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EmptyTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T IsVirtual(uintptr_t propertyInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF4F68))(0, propertyInfo);
	}
	template <typename T = uintptr_t> static T GetBaseDefinition(uintptr_t propertyInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF5060))(0, propertyInfo);
	}
	template <typename T = bool> static T IsPublic(uintptr_t property) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF5138))(0, property);
	}
	template <typename T = uintptr_t> static T GetObjectType(uintptr_t v) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE6550))(0, v);
	}
	template <typename T = Il2CppString*> static T GetTypeName(uintptr_t t, uintptr_t assemblyFormat, uintptr_t binder) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF51E4))(0, t, assemblyFormat, binder);
	}
	template <typename T = Il2CppString*> static T RemoveAssemblyDetails(Il2CppString* fullyQualifiedTypeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DF5308))(0, fullyQualifiedTypeName);
	}
	template <typename T = bool> static T HasDefaultConstructor(uintptr_t t, bool nonPublic) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DF4574))(0, t, nonPublic);
	}
	template <typename T = uintptr_t> static T GetDefaultConstructor(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF56A0))(0, t);
	}
	template <typename T = uintptr_t> static T GetDefaultConstructor_1(uintptr_t t, bool nonPublic) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DF54E0))(0, t, nonPublic);
	}
	template <typename T = bool> static T IsNullable(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE5EF8))(0, t);
	}
	template <typename T = bool> static T IsNullableType(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DE461C))(0, t);
	}
	template <typename T = uintptr_t> static T EnsureNotNullableType(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF577C))(0, t);
	}
	template <typename T = bool> static T IsGenericDefinition(uintptr_t type, uintptr_t genericInterfaceDefinition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF583C))(0, type, genericInterfaceDefinition);
	}
	template <typename T = bool> static T ImplementsGenericDefinition(uintptr_t type, uintptr_t genericInterfaceDefinition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DE3194))(0, type, genericInterfaceDefinition);
	}
	template <typename T = bool> static T ImplementsGenericDefinition_1(uintptr_t type, uintptr_t genericInterfaceDefinition, uintptr_t* implementingType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DF589C))(0, type, genericInterfaceDefinition, implementingType);
	}
	template <typename T = bool> static T InheritsGenericDefinition(uintptr_t type, uintptr_t genericClassDefinition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF5B08))(0, type, genericClassDefinition);
	}
	template <typename T = bool> static T InheritsGenericDefinition_1(uintptr_t type, uintptr_t genericClassDefinition, uintptr_t* implementingType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DF5BC4))(0, type, genericClassDefinition, implementingType);
	}
	template <typename T = bool> static T InheritsGenericDefinitionInternal(uintptr_t currentType, uintptr_t genericClassDefinition, uintptr_t* implementingType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DF5DA8))(0, currentType, genericClassDefinition, implementingType);
	}
	template <typename T = uintptr_t> static T GetCollectionItemType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF5F14))(0, type);
	}
	template <typename T = void> static T GetDictionaryKeyValueTypes(uintptr_t dictionaryType, uintptr_t* keyType, uintptr_t* valueType) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DF625C))(0, dictionaryType, keyType, valueType);
	}
	template <typename T = uintptr_t> static T GetMemberUnderlyingType(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF498C))(0, member);
	}
	template <typename T = bool> static T IsIndexedProperty(uintptr_t member) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF6588))(0, member);
	}
	template <typename T = bool> static T IsIndexedProperty_1(uintptr_t property) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF6690))(0, property);
	}
	template <typename T = uintptr_t> static T GetMemberValue(uintptr_t member, uintptr_t target) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF6750))(0, member, target);
	}
	template <typename T = void> static T SetMemberValue(uintptr_t member, uintptr_t target, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF6B28))(0, member, target, value);
	}
	template <typename T = bool> static T CanReadMemberValue(uintptr_t member, bool nonPublic) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4DF46A0))(0, member, nonPublic);
	}
	template <typename T = bool> static T CanSetMemberValue(uintptr_t member, bool nonPublic, bool canSetReadOnly) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x4DF47F0))(0, member, nonPublic, canSetReadOnly);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetFieldsAndProperties(uintptr_t type, uintptr_t bindingAttr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF6D90))(0, type, bindingAttr);
	}
	template <typename T = bool> static T IsOverridenGenericMember(uintptr_t memberInfo, uintptr_t bindingAttr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF7E98))(0, memberInfo, bindingAttr);
	}
	template <typename T = uintptr_t> static T GetAttribute(uintptr_t attributeProvider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335C914))(0, attributeProvider);
	}
	template <typename T = uintptr_t> static T GetAttribute_1(uintptr_t attributeProvider, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x335C9CC))(0, attributeProvider, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetAttributes(uintptr_t attributeProvider, bool inherit) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4E42A9C))(0, attributeProvider, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetAttributes_1(uintptr_t attributeProvider, uintptr_t attributeType, bool inherit) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x4DF807C))(0, attributeProvider, attributeType, inherit);
	}
	template <typename T = void> static T SplitFullyQualifiedTypeName(Il2CppString* fullyQualifiedTypeName, uintptr_t* typeName, uintptr_t* assemblyName) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4DF8600))(0, fullyQualifiedTypeName, typeName, assemblyName);
	}
	template <typename T = void*> static T GetAssemblyDelimiterIndex(Il2CppString* fullyQualifiedTypeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4DF87C8))(0, fullyQualifiedTypeName);
	}
	template <typename T = uintptr_t> static T GetMemberInfoFromType(uintptr_t targetType, uintptr_t memberInfo) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF8940))(0, targetType, memberInfo);
	}
	template <typename T = void*> static T GetFields(uintptr_t targetType, uintptr_t bindingAttr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF79F8))(0, targetType, bindingAttr);
	}
	template <typename T = void> static T GetChildPrivateFields(void* initialFields, uintptr_t targetType, uintptr_t bindingAttr) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF8C30))(0, initialFields, targetType, bindingAttr);
	}
	template <typename T = void*> static T GetProperties(uintptr_t targetType, uintptr_t bindingAttr) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF7B5C))(0, targetType, bindingAttr);
	}
	template <typename T = uintptr_t> static T RemoveFlag(uintptr_t bindingAttr, uintptr_t flag) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF8EDC))(0, bindingAttr, flag);
	}
	template <typename T = void> static T GetChildPrivateProperties(void* initialProperties, uintptr_t targetType, uintptr_t bindingAttr) {
		return ((T (*)(void *, void*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DF8EF0))(0, initialProperties, targetType, bindingAttr);
	}
	template <typename T = uintptr_t> static T GetDefaultValue(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4DF951C))(0, type);
	}

};

}
