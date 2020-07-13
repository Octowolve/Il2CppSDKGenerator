#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Reflection {

class Assembly
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Reflection", "Assembly"));
	}

	template <typename T = uintptr_t> T& _mono_assembly() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& resolve_event_holder() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _evidence() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _minimum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _optional() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _refuse() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _granted() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _denied() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& fromByteArray() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& assemblyName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = Il2CppString*> T get_code_base(bool escaped) {
		return ((T (*)(Assembly*, bool))(Il2CppBase() + 0x455F1F4))(this, escaped);
	}
	template <typename T = Il2CppString*> T get_fullname() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F1F8))(this);
	}
	template <typename T = Il2CppString*> T get_location() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F1FC))(this);
	}
	template <typename T = Il2CppString*> T GetCodeBase(bool escaped) {
		return ((T (*)(Assembly*, bool))(Il2CppBase() + 0x455F200))(this, escaped);
	}
	template <typename T = Il2CppString*> T get_FullName() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F204))(this);
	}
	template <typename T = Il2CppString*> T get_Location() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F214))(this);
	}
	template <typename T = bool> T IsDefined(uintptr_t attributeType, bool inherit) {
		return ((T (*)(Assembly*, uintptr_t, bool))(Il2CppBase() + 0x455F2E0))(this, attributeType, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes(bool inherit) {
		return ((T (*)(Assembly*, bool))(Il2CppBase() + 0x455F398))(this, inherit);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetCustomAttributes_1(uintptr_t attributeType, bool inherit) {
		return ((T (*)(Assembly*, uintptr_t, bool))(Il2CppBase() + 0x455F440))(this, attributeType, inherit);
	}
	template <typename T = uintptr_t> T GetManifestResourceInternal(Il2CppString* name, uintptr_t* size, uintptr_t* module) {
		return ((T (*)(Assembly*, Il2CppString*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x455F4F8))(this, name, size, module);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTypes(bool exportedOnly) {
		return ((T (*)(Assembly*, bool))(Il2CppBase() + 0x455F4FC))(this, exportedOnly);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTypes_1() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F500))(this);
	}
	template <typename T = uintptr_t> T GetType(Il2CppString* name, bool throwOnError) {
		return ((T (*)(Assembly*, Il2CppString*, bool))(Il2CppBase() + 0x455F514))(this, name, throwOnError);
	}
	template <typename T = uintptr_t> T GetType_1(Il2CppString* name) {
		return ((T (*)(Assembly*, Il2CppString*))(Il2CppBase() + 0x455F66C))(this, name);
	}
	template <typename T = uintptr_t> T InternalGetType(uintptr_t module, Il2CppString* name, bool throwOnError, bool ignoreCase) {
		return ((T (*)(Assembly*, uintptr_t, Il2CppString*, bool, bool))(Il2CppBase() + 0x455F68C))(this, module, name, throwOnError, ignoreCase);
	}
	template <typename T = uintptr_t> T GetType_2(Il2CppString* name, bool throwOnError, bool ignoreCase) {
		return ((T (*)(Assembly*, Il2CppString*, bool, bool))(Il2CppBase() + 0x455F530))(this, name, throwOnError, ignoreCase);
	}
	template <typename T = void> static T InternalGetAssemblyName(Il2CppString* assemblyFile, uintptr_t aname) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455F6AC))(0, assemblyFile, aname);
	}
	template <typename T = void> static T FillName(uintptr_t ass, uintptr_t aname) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x455F6B8))(0, ass, aname);
	}
	template <typename T = uintptr_t> T GetName(bool copiedName) {
		return ((T (*)(Assembly*, bool))(Il2CppBase() + 0x455F6C4))(this, copiedName);
	}
	template <typename T = uintptr_t> T GetName_1() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F790))(this);
	}
	template <typename T = uintptr_t> T UnprotectedGetName() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F7A4))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455F84C))(this);
	}
	template <typename T = uintptr_t> static T LoadFrom(Il2CppString* assemblyFile, bool refonly) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x455F874))(0, assemblyFile, refonly);
	}
	template <typename T = uintptr_t> static T LoadFrom_1(Il2CppString* assemblyFile, uintptr_t securityEvidence) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455F880))(0, assemblyFile, securityEvidence);
	}
	template <typename T = uintptr_t> static T Load(Il2CppString* assemblyString) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x455F88C))(0, assemblyString);
	}
	template <typename T = uintptr_t> static T Load_1(uintptr_t assemblyRef) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x455F8C8))(0, assemblyRef);
	}
	template <typename T = uintptr_t> static T LoadWithPartialName(Il2CppString* partialName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x455F904))(0, partialName);
	}
	template <typename T = uintptr_t> static T load_with_partial_name(Il2CppString* name, uintptr_t e) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455F940))(0, name, e);
	}
	template <typename T = uintptr_t> static T LoadWithPartialName_1(Il2CppString* partialName, uintptr_t securityEvidence) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x455F924))(0, partialName, securityEvidence);
	}
	template <typename T = uintptr_t> static T LoadWithPartialName_2(Il2CppString* partialName, uintptr_t securityEvidence, bool oldBehavior) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x455F94C))(0, partialName, securityEvidence, oldBehavior);
	}
	template <typename T = uintptr_t> T CreateInstance(Il2CppString* typeName) {
		return ((T (*)(Assembly*, Il2CppString*))(Il2CppBase() + 0x455FA34))(this, typeName);
	}
	template <typename T = uintptr_t> T CreateInstance_1(Il2CppString* typeName, bool ignoreCase) {
		return ((T (*)(Assembly*, Il2CppString*, bool))(Il2CppBase() + 0x455FA3C))(this, typeName, ignoreCase);
	}
	template <typename T = uintptr_t> T GetModule(Il2CppString* name) {
		return ((T (*)(Assembly*, Il2CppString*))(Il2CppBase() + 0x455FBCC))(this, name);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetModulesInternal() {
		return ((T (*)(Assembly*))(Il2CppBase() + 0x455FFE4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetModules(bool getResourceModules) {
		return ((T (*)(Assembly*, bool))(Il2CppBase() + 0x455FE04))(this, getResourceModules);
	}
	template <typename T = uintptr_t> static T GetExecutingAssembly() {
		return ((T (*)(void *))(Il2CppBase() + 0x455FFE8))(0);
	}

};

}
