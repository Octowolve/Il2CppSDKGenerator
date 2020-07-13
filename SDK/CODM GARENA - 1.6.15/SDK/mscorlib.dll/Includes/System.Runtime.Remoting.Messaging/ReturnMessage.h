#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class ReturnMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "ReturnMessage"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _outArgs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _args() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _outArgsCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _callCtx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _returnValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _uri() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _exception() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _methodBase() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _methodName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _methodSignature() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& _typeName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _properties() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _inArgInfo() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T System_Runtime_Remoting_Messaging_IInternalMessage_set_Uri(Il2CppString* value) {
		return ((T (*)(ReturnMessage*, Il2CppString*))(Il2CppBase() + 0x4B3D3C8))(this, value);
	}
	template <typename T = int32_t> T get_ArgCount() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D3D8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Args() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D3FC))(this);
	}
	template <typename T = uintptr_t> T get_LogicalCallContext() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D404))(this);
	}
	template <typename T = uintptr_t> T get_MethodBase() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D4A0))(this);
	}
	template <typename T = Il2CppString*> T get_MethodName() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D4A8))(this);
	}
	template <typename T = uintptr_t> T get_MethodSignature() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D4E8))(this);
	}
	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D660))(this);
	}
	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D700))(this);
	}
	template <typename T = Il2CppString*> T get_Uri() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D764))(this);
	}
	template <typename T = void> T set_Uri(Il2CppString* value) {
		return ((T (*)(ReturnMessage*, Il2CppString*))(Il2CppBase() + 0x4B3D3D0))(this, value);
	}
	template <typename T = uintptr_t> T GetArg(int32_t argNum) {
		return ((T (*)(ReturnMessage*, int32_t))(Il2CppBase() + 0x4B3D76C))(this, argNum);
	}
	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D7B0))(this);
	}
	template <typename T = int32_t> T get_OutArgCount() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D7B8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OutArgs() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D88C))(this);
	}
	template <typename T = uintptr_t> T get_ReturnValue() {
		return ((T (*)(ReturnMessage*))(Il2CppBase() + 0x4B3D970))(this);
	}

};

}
