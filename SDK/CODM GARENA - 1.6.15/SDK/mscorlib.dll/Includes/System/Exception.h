#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Exception
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "Exception"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& trace_ips() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& inner_exception() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& message() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& help_link() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& class_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& stack_trace() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _remoteStackTraceString() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& remote_stack_index() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& hresult() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uintptr_t> T get_InnerException() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFAEC))(this);
	}
	template <typename T = int32_t> T get_HResult() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFAF4))(this);
	}
	template <typename T = void> T set_HResult(int32_t value) {
		return ((T (*)(Exception*, int32_t))(Il2CppBase() + 0x3FC7B7C))(this, value);
	}
	template <typename T = Il2CppString*> T get_ClassName() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFAFC))(this);
	}
	template <typename T = Il2CppString*> T get_Message() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFB54))(this);
	}
	template <typename T = Il2CppString*> T get_Source() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFC3C))(this);
	}
	template <typename T = Il2CppString*> T get_StackTrace() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFD9C))(this);
	}
	template <typename T = uintptr_t> T get_Data() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FD0740))(this);
	}
	template <typename T = void> T GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Exception*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FD07E0))(this, info, context);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FD0AA0))(this);
	}
	template <typename T = void> T GetFullNameForStackTrace(uintptr_t sb, uintptr_t mi) {
		return ((T (*)(Exception*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3FD0258))(this, sb, mi);
	}
	template <typename T = uintptr_t> T GetType() {
		return ((T (*)(Exception*))(Il2CppBase() + 0x3FCFB4C))(this);
	}

};

}
