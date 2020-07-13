#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class MethodCall
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "MethodCall"));
	}

	template <typename T = Il2CppString*> T& _uri() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _typeName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _methodName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _args() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _methodSignature() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _methodBase() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _callContext() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _genericArguments() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& ExternalProperties() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& InternalProperties() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map1F() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(Il2CppString* value) {
		return ((T (*)(MethodCall*, Il2CppString*))(Il2CppBase() + 0x4B37F18))(this, value);
	}
	template <typename T = void> T InitMethodProperty(Il2CppString* key, uintptr_t value) {
		return ((T (*)(MethodCall*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B33B18))(this, key, value);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(MethodCall*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B34474))(this, info, context);
	}
	template <typename T = int32_t> T get_ArgCount() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B37F28))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Args() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B37F4C))(this);
	}
	template <typename T = uintptr_t> T get_LogicalCallContext() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B37F54))(this);
	}
	template <typename T = uintptr_t> T get_MethodBase() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B37FF0))(this);
	}
	template <typename T = Il2CppString*> T get_MethodName() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B38018))(this);
	}
	template <typename T = uintptr_t> T get_MethodSignature() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B38060))(this);
	}
	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B34A30))(this);
	}
	template <typename T = void> T InitDictionary() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B381DC))(this);
	}
	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B38374))(this);
	}
	template <typename T = Il2CppString*> T get_Uri() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B383D4))(this);
	}
	template <typename T = void> T set_Uri(Il2CppString* value) {
		return ((T (*)(MethodCall*, Il2CppString*))(Il2CppBase() + 0x4B37F20))(this, value);
	}
	template <typename T = uintptr_t> T GetArg(int32_t argNum) {
		return ((T (*)(MethodCall*, int32_t))(Il2CppBase() + 0x4B383DC))(this, argNum);
	}
	template <typename T = void> T Init() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B38420))(this);
	}
	template <typename T = void> T ResolveMethod() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B3740C))(this);
	}
	template <typename T = uintptr_t> T CastTo(Il2CppString* clientType, uintptr_t serverType) {
		return ((T (*)(MethodCall*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B38518))(this, clientType, serverType);
	}
	template <typename T = Il2CppString*> static T GetTypeNameFromAssemblyQualifiedName(Il2CppString* aqname) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B39028))(0, aqname);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_GenericArguments() {
		return ((T (*)(MethodCall*))(Il2CppBase() + 0x4B38FCC))(this);
	}

};

}
