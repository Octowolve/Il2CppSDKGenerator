#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class AppDomain
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "AppDomain"));
	}

	template <typename T = uintptr_t> T& _mono_app_domain() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> static T& _process_guid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& type_resolve_in_progress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& assembly_resolve_in_progress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& assembly_resolve_in_progress_refonly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _evidence() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _granted() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _principalPolicy() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _principal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& default_domain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& _domain_manager() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _activation() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _applicationIdentity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& AssemblyLoad() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AssemblyResolve() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& DomainUnload() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ProcessExit() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ResourceResolve() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TypeResolve() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& UnhandledException() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ReflectionOnlyAssemblyResolve() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T add_UnhandledException(uintptr_t value) {
		return ((T (*)(AppDomain*, uintptr_t))(Il2CppBase() + 0x361D034))(this, value);
	}
	template <typename T = void> T remove_UnhandledException(uintptr_t value) {
		return ((T (*)(AppDomain*, uintptr_t))(Il2CppBase() + 0x361D2E8))(this, value);
	}
	template <typename T = Il2CppString*> T getFriendlyName() {
		return ((T (*)(AppDomain*))(Il2CppBase() + 0x361D4A8))(this);
	}
	template <typename T = uintptr_t> static T getCurDomain() {
		return ((T (*)(void *))(Il2CppBase() + 0x361D4AC))(0);
	}
	template <typename T = uintptr_t> static T get_CurrentDomain() {
		return ((T (*)(void *))(Il2CppBase() + 0x361D4B0))(0);
	}
	template <typename T = uintptr_t> T DefineInternalDynamicAssembly(uintptr_t name, uintptr_t access) {
		return ((T (*)(AppDomain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361D4B4))(this, name, access);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAssemblies(bool refOnly) {
		return ((T (*)(AppDomain*, bool))(Il2CppBase() + 0x361D56C))(this, refOnly);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetAssemblies_1() {
		return ((T (*)(AppDomain*))(Il2CppBase() + 0x361D570))(this);
	}
	template <typename T = uintptr_t> T InitializeLifetimeService() {
		return ((T (*)(AppDomain*))(Il2CppBase() + 0x361D578))(this);
	}
	template <typename T = uintptr_t> T LoadAssembly(Il2CppString* assemblyRef, uintptr_t securityEvidence, bool refOnly) {
		return ((T (*)(AppDomain*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x361D580))(this, assemblyRef, securityEvidence, refOnly);
	}
	template <typename T = uintptr_t> T Load(uintptr_t assemblyRef) {
		return ((T (*)(AppDomain*, uintptr_t))(Il2CppBase() + 0x361D584))(this, assemblyRef);
	}
	template <typename T = uintptr_t> T Load_1(uintptr_t assemblyRef, uintptr_t assemblySecurity) {
		return ((T (*)(AppDomain*, uintptr_t, uintptr_t))(Il2CppBase() + 0x361D58C))(this, assemblyRef, assemblySecurity);
	}
	template <typename T = uintptr_t> T Load_2(Il2CppString* assemblyString) {
		return ((T (*)(AppDomain*, Il2CppString*))(Il2CppBase() + 0x361DC50))(this, assemblyString);
	}
	template <typename T = uintptr_t> T Load_3(Il2CppString* assemblyString, uintptr_t assemblySecurity, bool refonly) {
		return ((T (*)(AppDomain*, Il2CppString*, uintptr_t, bool))(Il2CppBase() + 0x361DC70))(this, assemblyString, assemblySecurity, refonly);
	}
	template <typename T = uintptr_t> static T InternalSetContext(uintptr_t context) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x361DE24))(0, context);
	}
	template <typename T = uintptr_t> static T InternalGetContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x361DE2C))(0);
	}
	template <typename T = uintptr_t> static T InternalGetDefaultContext() {
		return ((T (*)(void *))(Il2CppBase() + 0x361DE30))(0);
	}
	template <typename T = Il2CppString*> static T InternalGetProcessGuid(Il2CppString* newguid) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x361DE34))(0, newguid);
	}
	template <typename T = Il2CppString*> static T GetProcessGuid() {
		return ((T (*)(void *))(Il2CppBase() + 0x361DE3C))(0);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(AppDomain*))(Il2CppBase() + 0x361DF64))(this);
	}
	template <typename T = uintptr_t> T DoTypeResolve(uintptr_t name_or_tb) {
		return ((T (*)(AppDomain*, uintptr_t))(Il2CppBase() + 0x361DF68))(this, name_or_tb);
	}

};

}
