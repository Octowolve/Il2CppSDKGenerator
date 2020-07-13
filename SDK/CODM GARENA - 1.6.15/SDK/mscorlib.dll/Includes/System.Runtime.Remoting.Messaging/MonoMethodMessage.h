#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Messaging {

class MonoMethodMessage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Messaging", "MonoMethodMessage"));
	}

	template <typename T = uintptr_t> T& method() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& args() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& arg_types() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ctx() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& rval() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& exc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& call_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& uri() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& properties() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& methodSignature() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3BE94))(this);
	}
	template <typename T = int32_t> T get_ArgCount() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3BF34))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_Args() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C030))(this);
	}
	template <typename T = uintptr_t> T get_LogicalCallContext() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C038))(this);
	}
	template <typename T = uintptr_t> T get_MethodBase() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C040))(this);
	}
	template <typename T = Il2CppString*> T get_MethodName() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C048))(this);
	}
	template <typename T = uintptr_t> T get_MethodSignature() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C11C))(this);
	}
	template <typename T = Il2CppString*> T get_TypeName() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C294))(this);
	}
	template <typename T = Il2CppString*> T get_Uri() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C38C))(this);
	}
	template <typename T = void> T set_Uri(Il2CppString* value) {
		return ((T (*)(MonoMethodMessage*, Il2CppString*))(Il2CppBase() + 0x4B3C394))(this, value);
	}
	template <typename T = uintptr_t> T GetArg(int32_t arg_num) {
		return ((T (*)(MonoMethodMessage*, int32_t))(Il2CppBase() + 0x4B3C39C))(this, arg_num);
	}
	template <typename T = uintptr_t> T get_Exception() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C3D8))(this);
	}
	template <typename T = int32_t> T get_OutArgCount() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C3E0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_OutArgs() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C458))(this);
	}
	template <typename T = uintptr_t> T get_ReturnValue() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3C5F0))(this);
	}
	template <typename T = uintptr_t> T get_CallType() {
		return ((T (*)(MonoMethodMessage*))(Il2CppBase() + 0x4B3BF68))(this);
	}

};

}
